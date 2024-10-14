#ifndef SINGLETON_H
#define SINGLETON_H

#include"global.h"

template<class T>
class Singleton{
protected:
    Singleton()=default;
    Singleton(const Singleton<T>&)=delete;
    Singleton& operator=(const Singleton<T>&)=delete;

    //类中的静态成员变量必须在类定义的外部进行定义，即使你在类声明中声明了静态成员变量，它也不会自动分配内存，必须在类外部显式定义它，否则会导致链接错误。
    static std::shared_ptr<T> _instance;

public:
    static std::shared_ptr<T> GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag,[&](){
            _instance=std::shared_ptr<T>(new T);
        });
        return _instance;
    }

    void PrintAddress(){
        std::cout<<_instance.get()<<std::endl;
    }

    ~Singleton(){
        std::cout<<"this is singleton destruct"<<std::endl;
    }

};

template<class T>
std::shared_ptr<T> Singleton<T>::_instance=nullptr;

#endif // SINGLETON_H
