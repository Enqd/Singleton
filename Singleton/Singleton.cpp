#include <iostream>

//����һ�������ࣨ���������������
class Singleton
{
private:
	Singleton() {} //���캯��Ҫ����˽������������ⲿ����ʵ��

	float m_Member = 0.0f; //�Ǿ�̬����

	static Singleton s_Instance; //��̬����
public:
	Singleton(const Singleton&) = delete; //ɾ�����ƹ��캯��������������ʵ��

	static Singleton& Get() //���ķ���������Get��̬�������һ��Singletonʵ��
	{
		//static Singleton s_Instance ����ѡ�������ﴴ����̬����������һ���ֲ���̬����������Ҫ���ⲿ�ٶ���
		return s_Instance;
	}

	void Function() {} //���巽��
};

Singleton Singleton::s_Instance; //��̬����Ҫ����

int main()
{
	Singleton::Get().Function();//1

	Singleton& instance = Singleton::Get();//2
	instance.Function();

	std::cin.get();
}