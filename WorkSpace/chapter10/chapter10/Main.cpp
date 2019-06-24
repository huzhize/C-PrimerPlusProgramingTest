// chapter10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//
/*
  第10章：对象和类
  类的声明一般放在xx.h文件中，然后在xx.cpp中定义该类
  只要类方法不修改对象，就应该将其声明为const
*/

#include "pch.h"
#include <iostream>
#include "Bank.h"
#include "Person.h"
#include "Golf.h"
#include "SALE.h"
#include "Stack.h"
#include "Move.h"
#include "Plorg.h"

void test10_1();
void test10_2();
void test10_3();
void test10_4();
void test10_5();
void test10_6();
void test10_7();
void test10_8();

int main()
{
    std::cout << "Hello World!\n"; 
	double i = 1545421532.25254545;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << i<<endl;
	test10_7();
}

void test10_1()
{
	Bank bank("huzz", "201521091092", 211222.1254);
	bank.show();
	std::cout << "get deposit:" << bank.getDeposit();
	bank.updateDeposit(1000.000);
	std::cout << "get deposit:" << bank.getDeposit();
	bank.show();
}

void test10_2()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	one.FormalShow();
	two.show();
	two.FormalShow();
	three.show();
	three.FormalShow();
}

void test10_3()
{
	Golf g;
	g.setGolf("huzz", 10);
	g.showGolf();
}

void test10_4()
{
	using namespace SALES;
	Sales one;
	double ar[4] = {11.2,21.3,22.5,10.8};
	int n = 4;
	one.setSales(ar, n);
	one.setSales();
	one.showSales();
}

void test10_5()
{
	customer c =
	{
		"huzz",
		10.2
	};
	Stack s;
	s.push(c);
	s.pop(c);
	
}

void test10_6()
{
	Move m(1, 1);
	m.showMove();
	Move t(10, 10);
	m = m.add(t);
	m.showMove();
	m.reset(5, 5.0);
	m.showMove();
}

void test10_7()
{
	Plorg p(10, "huzz");
	p.show();
	p.reset(12);
	p.show();
	Plorg m(10);
	m.show();
}

void test10_8()
{

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
