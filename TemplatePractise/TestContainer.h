#pragma once
#include <iostream>
//涉及到模板的话，类的声明以及实现最好放在一个头文件中
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
		std::cout << "添加数据" << item << "成功" << std::endl;
		return true;
	}
	else
	{
		std::cout << "添加数据失败" << std::endl;
		return false;
	}
}

template<typename type>
bool TestContainer<type>::pop(type& item)
{
	if (top != 0)
	{
		item = contain[--top];
		std::cout << "取出数据为:" << item << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

