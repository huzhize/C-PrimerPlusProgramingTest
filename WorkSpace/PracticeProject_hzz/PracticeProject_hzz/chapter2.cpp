#include "pch.h"
#include <iostream>
using namespace std;

void test1() 
{
	cout << "name: \thuzz\naddress:\tWuhan";
}

void test2()
{
	long l = 0;
	cout << "请输入距离:";
	cin >> l;
	cout << l * 20 << "码\n";
}

void test3()
{
	cout << "Three blind mice\n";
}

void test4()
{
	int age = 0;
	cout << "4_请输入年龄:";
	cin >> age;
	cout << "包含" << age * 12 << "个月\n";
}

void test5()
{
	double celsius = 0;
	cout << "Please entera Celsius value:";
	cin >> celsius;
	cout << "\n" << celsius << "degress Celsius is " << 1.8 * celsius + 32.0 << "degress Fahrenheit.\n";
}

void test6()
{
	double distance = 0;
	cout << "Enter the number of light years:";
	cin >> distance;
	cout << endl << distance << " light years = " << distance * 63240 << " astronomical units.\n";
}

void test7(int hours, int minutes)
{
	cout << "Time:" << hours << " : " << minutes;
}