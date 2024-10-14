#pragma once
#include"const.h"

class HttpConnection:public std::enable_shared_from_this<HttpConnection>{
public:
	friend class LogicSystem;
	HttpConnection(tcp::socket socket);
	void Start();
private:
	void CheckDeadline();//��ⳬʱ
	void WriteResponse();//Ӧ��
	void HandleReq();//��������
	void PreParseGetParam();

	tcp::socket _socket;
	beast::flat_buffer _buffer{ 8192 };//�������ݵ�buffer����СΪ8k
	http::request<http::dynamic_body> _request;
	http::response<http::dynamic_body> _response;
	net::steady_timer deadline_{//����һ����Ϊ deadline_�Ķ�ʱ�����󣬳�ʱʱ����Ϊ60s
		_socket.get_executor(),std::chrono::seconds(60)
	};

	std::string _get_url;
	std::unordered_map<std::string, std::string> _get_params;
};

