#include "pch.h"
#include "Wine.h"
#include <iostream>
#include <string>

Wine::Wine(const char * l,const int y)
{
	name = l;
	year = y;
	yr = new int[year];
	bot = new int[year];
	pair = Pair(yr, bot, y);
}
Wine::Wine(const char * l, int y, const int ye[], const int bo[])
{
	name = l;
	year = y;
	yr = new int[0];
	bot = new int[0];
	pair = Pair(ye, bo, year);
}

Wine::~Wine()
{
	delete[] yr;
	delete[] bot;
}

int Wine::GetBottles()
{
	for (int i = 0;i < year;i++)
	{
		cout << "输入年份：\n";
		cin >> yr[i];
		cout << "输入瓶数：\n";
		cin >> bot[i];
	}

	return 0;
}

void Wine::show()
{
	using namespace std;
	cout << "酒名：" << name << endl;
	cout << "\tyear\tbottles\n";
	for (int i = 0;i < year;i++)
	{
		cout << "\t" << yr[i] << "\t" << bot[i] << endl;
	}
}

void Wine::p()
{
	using namespace std;
	cout << "酒名：" << name << endl;
	cout << "\tyear\tbottles\n";
	for (int i = 0;i < year;i++)
	{
		cout << "\t" << pair.getV1(i) << "\t" << pair.getV2(i)<< endl;
	}
}