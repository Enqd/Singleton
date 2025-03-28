#include <iostream>

//定义一个单例类（如随机数生成器）
class Singleton
{
private:
	Singleton() {} //构造函数要放在私有类里，避免在外部创建实例

	float m_Member = 0.0f; //非静态变量

	static Singleton s_Instance; //静态变量
public:
	Singleton(const Singleton&) = delete; //删除复制构造函数，避免产生多个实例

	static Singleton& Get() //核心方法，调用Get静态方法获得一个Singleton实例
	{
		//static Singleton s_Instance 可以选择在这里创建静态变量，这是一个局部静态变量，不需要在外部再定义
		return s_Instance;
	}

	void Function() {} //具体方法
};

Singleton Singleton::s_Instance; //静态变量要定义

int main()
{
	Singleton::Get().Function();//1

	Singleton& instance = Singleton::Get();//2
	instance.Function();

	std::cin.get();
}