// TemplatePractise.cpp : 定义控制台应用程序的入口点。
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

