#include "CServer.h"
#include"HttpConnection.h"
#include"AsioIOServicePool.h"

CServer::CServer(net::io_context& ioc, unsigned short& port) :
	_ioc(ioc), _acceptor(ioc, tcp::endpoint(tcp::v4(), port)){
}

void CServer::Start() {
	/*
	*shared_from_this ��Ҫ�����Ǳ���������첽���������������б���ǰ����
	*shared_from_this() ���ص� shared_ptr ����ԭ������ö���� shared_ptr �������ü����ģ�����ڶ�����������ڹ����в����������
	*/
	auto self = shared_from_this();
	auto& io_context = AsioIOServicePool::GetInstance()->GetIOService();
	std::shared_ptr<HttpConnection> new_con = std::make_shared< HttpConnection>(io_context);
	_acceptor.async_accept(new_con->GetSocket(), [self,new_con](beast::error_code ec) {
		try {
			//���������������ӣ�������������������
			if (ec) {
				self->Start();
				return;
			}

			//���������ӣ�����HpptConnection�����������
			new_con->Start();

			//��������
			self->Start();
		}
		catch(std::exception& exp){

		}
	});
}