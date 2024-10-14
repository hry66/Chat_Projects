#pragma once
#include"const.h"

class HttpConnection:public std::enable_shared_from_this<HttpConnection>{
public:
	friend class LogicSystem;
	HttpConnection(tcp::socket socket);
	void Start();
private:
	void CheckDeadline();//检测超时
	void WriteResponse();//应答
	void HandleReq();//处理请求
	void PreParseGetParam();

	tcp::socket _socket;
	beast::flat_buffer _buffer{ 8192 };//接收数据的buffer，大小为8k
	http::request<http::dynamic_body> _request;
	http::response<http::dynamic_body> _response;
	net::steady_timer deadline_{//定义一个名为 deadline_的定时器对象，超时时间设为60s
		_socket.get_executor(),std::chrono::seconds(60)
	};

	std::string _get_url;
	std::unordered_map<std::string, std::string> _get_params;
};

