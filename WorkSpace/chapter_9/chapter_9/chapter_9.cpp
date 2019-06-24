// chapter_9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "chapter9.h"

const int ArSize = 30;
void strcount(const char * str);

void test9_4()
{
	using namespace SALES;
	Sales s;
	double ar[4] = { 12.0,25.6,12.4,22.8 };
	setSales(s, ar, 4);
	setSales(s);
	showSales(s);

	return;
}


int main()
{
	//test8_4();
	//test9_3();
	//test9_2();
	return 0;
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
		{
			cin.get(next);
		}
		
		strcount(input);
		cout << "Enter a line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const char * str)
{
	using namespace std;
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains";
	while (*str++)
	{
		count++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << "characters total\n";


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
