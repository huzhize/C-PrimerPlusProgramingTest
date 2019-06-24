// chapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "StringBad.h"
#include "Cow.h"
#include "String2.h"
#include "Stock.h"

void callme1(StringBad & sb);
void callme2(StringBad sb);
void test12_1();
void test12_2();
void test12_3();
void test12_4();
int main()
{
	using namespace std;
	


	test12_3();

	return 0;

}

void foo()
{
	/*
	using namespace std;
	StringBad headline1("headline1");
	StringBad headline2("headline2");
	StringBad sport("sport");
	cout << headline1 << endl;
	cout << headline2 << endl;
	cout << sport;
	//callme1(headline1);
	//callme2(headline2);	//按值传递后headline2将会执行析构函数
	cout << headline2;
	*/
	//编译器将自动生成构造函数StringBad(const StringBad &) 称为复制构造函数 
	//复制构造函数是按值复制，遇到字符串时复制的不是字符串而是指向字符串的指针，复制后两个对象中的str
	//指向的是同一个字符串，其中一个对象执行析构函数时会释放str指针指向的内存，当另一个对象执行析构函数
	//释放str指针指向的内存时“会导致不确定的、有害的后果”； strcpy()是按值复制，可避免这种情况
	//StringBad sb = sport;	
	//cout << "sb:" << sb;
	StringBad knot;
	//knot = headline1;
	//cout << "knot:" << knot << endl;
	return ;
}

void callme1(StringBad & sb)
{
	std::cout << "callme1" << sb;
}

void callme2(StringBad sb)
{
	std::cout << "callme2" << sb;
}

void test12_1()
{
	Cow c("huzhize", "dixiao", 22.01);
	c.showCow();
}

void test12_2()
{
	String2 str1("huzhize");
	//str1.show();
	str1.~String2();
}

void test12_3()
{
	const int STKS = 4;
	Stock stocks[STKS] = {
		Stock("stock1",12,20.0),
		Stock("stock2",200,2.0),
		Stock("stock3",60,6.5)
	};

	std::cout << "Stock holdings:\n";;
	int st;
	for (st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}
	const Stock * top = &stocks[0];
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}

	std::cout << "\nMost valuable holding:\n";
	top->show();
	return;
}
void tset12_4()
{
	test12_3();
}