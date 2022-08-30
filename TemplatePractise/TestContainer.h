#pragma once
#include <iostream>
//�漰��ģ��Ļ�����������Լ�ʵ����÷���һ��ͷ�ļ���
template<typename type>
class TestContainer
{
public:
	TestContainer();
	~TestContainer();
	bool push(const type& item);
	bool pop(type& item);
private:
	int top;
	enum {MAX = 10};
	type contain[MAX];
};


template<typename type>
TestContainer<type>::TestContainer()
{
	top = 0;
}

template<typename type>
TestContainer<type>::~TestContainer()
{

}

template<typename type>
bool TestContainer<type>::push(const type& item)
{
	if (top < 10)
	{
		contain[top++] = item;
		std::cout << "�������" << item << "�ɹ�" << std::endl;
		return true;
	}
	else
	{
		std::cout << "�������ʧ��" << std::endl;
		return false;
	}
}

template<typename type>
bool TestContainer<type>::pop(type& item)
{
	if (top != 0)
	{
		item = contain[--top];
		std::cout << "ȡ������Ϊ:" << item << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

