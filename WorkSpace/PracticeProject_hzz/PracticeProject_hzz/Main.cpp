// PracticeProject_hzz.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "chapter2.h"
#include "chapter3.h"
#include "chapter4.h"
#include "chapter5.h"
#include "chapter8.h"
#include "golf.h"

#include <iostream>
extern golf ann;
struct people
{
	char name[40];
	int age;
};

void setInfo(people & huzz, int n)
{
	strcpy(huzz.name, "huzz");
}
int main()
{
	test8_4();
	struct people huzz;
	setInfo(huzz, 10);
	cout << huzz.name;

	/*
	int hours = 0, minutes = 0;
	std::cout << "\nEnter the number of hours:";
	std::cin >> hours;
	std::cout << "\nEnter the number of minutes:";
	std::cin >> minutes;

	test7(hours,minutes);
	
	using namespace std;
	int i = 0;
	cin >> i;
	if (cin.rdstate() != ios::goodbit)
	{

	cin.sync();
	cin.clear();
	cout << "aa";
	getchar();
	getchar();
	cin >> i;
	}
	cout << i;
	*/
	
	

}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
