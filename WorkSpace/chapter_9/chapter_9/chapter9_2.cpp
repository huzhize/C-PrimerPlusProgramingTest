#include "pch.h"
#include<iostream>
#include <string>
using namespace std;

void test9_2()
{
	string result;
	string t;
	for (;;)
	{
		cout << "����һ���ַ���\n";
		getline(cin, t);
		result += t;
		if (t == "") break;
		int n = 0;
		for (int i = 0;i < t.size();i++)
		{
			if (t.at(i) != ' ')
			{
				n++;
			}
		}
		cout << "�����ַ�����" << n << "���ַ������ո��⣩";

	}
	int size = result.size();
	int number = 0;
	for (int i = 0;i < size;i++)
	{
		if (result.at(i) != ' ')
		{
			number++;
		}
	}
	cout <<"characters:"<< result<<"\ncharacters total:"<<number;


}