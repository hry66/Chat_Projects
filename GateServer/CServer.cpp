#include "CServer.h"
#include"HttpConnection.h"

CServer::CServer(net::io_context& ioc, unsigned short& port) :
	_ioc(ioc), _acceptor(ioc, tcp::endpoint(tcp::v4(), port)),
	_socket(ioc)
{}

void CServer::Start() {
	/*
	*shared_from_this 主要作用是避免对象在异步操作或其他场景中被提前销毁
	*shared_from_this() 返回的 shared_ptr 是与原来管理该对象的 shared_ptr 共享引用计数的，因此在对象的生命周期管理中不会产生问题
	*/
	auto self = shared_from_this();
	_acceptor.async_accept(_socket, [self](beast::error_code ec) {
		try {
			//出错则放弃这个连接，继续监听其他新链接
			if (ec) {
				self->Start();
				return;
			}

			//处理新连接，创建HpptConnection类管理新连接
			std::make_shared<HttpConnection>(std::move(self->_socket))->Start();

			//继续监听
			self->Start();
		}
		catch(std::exception& exp){

		}
	});
}