#pragma once
/* 
   2019.5.28
   第十四章 编程练习14_1 编程练习14_2

*/
#include <valarray>
#include <iostream>
using namespace std;
class Pair
{
private:
	valarray<int> v1;	//年份
	valarray<int> v2;	//该年生产瓶数
public:
	Pair()
	{

	}
	Pair(const int *ar1, const int *ar2, int size)
	{
		v1.resize(size);
		v2.resize(size);
		for (int i = 0;i < size;i++)
		{
			v1[i] = ar1[i];
			v2[i] = ar2[i];
		}
		
	}
	int getV1(int index)
	{
		return v1[index];
	}
	int getV2(int index)
	{
		return v2[index];
	}

};
class Wine
{
private:
	int * yr;
	int * bot;
	string name;	//葡萄酒名称
	int year = 3;	//年数，即数组长度
	Pair pair;
public:
	Wine(const char * l,int y);
	Wine(const char * l, int y, const int yr[], const int bot[]);
	~Wine();
	int GetBottles();
	void show();
	void p();
};
