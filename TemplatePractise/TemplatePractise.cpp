// TemplatePractise.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TestContainer.h"

int main()
{
	int temp;
	TestContainer<int> test;
	test.push(5);
	test.pop(temp);
	std::cin.get();
    return 0;
}

