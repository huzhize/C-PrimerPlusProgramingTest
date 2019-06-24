#pragma once
/* 
   2019.5.28
   ��ʮ���� �����ϰ14_1 �����ϰ14_2

*/
#include <valarray>
#include <iostream>
using namespace std;
class Pair
{
private:
	valarray<int> v1;	//���
	valarray<int> v2;	//��������ƿ��
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
	string name;	//���Ѿ�����
	int year = 3;	//�����������鳤��
	Pair pair;
public:
	Wine(const char * l,int y);
	Wine(const char * l, int y, const int yr[], const int bot[]);
	~Wine();
	int GetBottles();
	void show();
	void p();
};
