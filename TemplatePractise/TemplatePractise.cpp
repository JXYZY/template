// TemplatePractise.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TestContainer.h"
#include<string>
int main()
{
	int temp;
	std::string content, inp = "jxylovezy";
	TestContainer<int> test;
	test.push(5);
	test.pop(temp);
	TestContainer<std::string> testString;
	testString.push(inp);
	testString.pop(content);
	std::cin.get();
    return 0;
}

