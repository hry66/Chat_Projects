#include "CServer.h"
#include"HttpConnection.h"

CServer::CServer(net::io_context& ioc, unsigned short& port) :
	_ioc(ioc), _acceptor(ioc, tcp::endpoint(tcp::v4(), port)),
	_socket(ioc)
{}

void CServer::Start() {
	/*
	*shared_from_this ��Ҫ�����Ǳ���������첽���������������б���ǰ����
	*shared_from_this() ���ص� shared_ptr ����ԭ������ö���� shared_ptr �������ü����ģ�����ڶ�����������ڹ����в����������
	*/
	auto self = shared_from_this();
	_acceptor.async_accept(_socket, [self](beast::error_code ec) {
		try {
			//���������������ӣ�������������������
			if (ec) {
				self->Start();
				return;
			}

			//���������ӣ�����HpptConnection�����������
			std::make_shared<HttpConnection>(std::move(self->_socket))->Start();

			//��������
			self->Start();
		}
		catch(std::exception& exp){

		}
	});
}