#include "pch.h"
#include <iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;


void test5_1()
{
	int i, j, sum = 0;
	cout << "输入2个整数,空格隔开:";
	cin >> i >> j;
	for (;i <= j;i++)
	{
		sum += i;
	}
	cout << "result:" << sum;
}

void test5_2()
{
	const int len = 101;
	array<long double, len> factorials;
	factorials[0] = factorials[1] = 1LL;
	for (int i = 2; i < len; i++)
	{
		factorials[i] = i * factorials[i - 1];
		cout << i << "! = " << factorials[i]<<endl;
	}
}

void test5_3()
{
	int input = 0, sum = 0;
	for (;;)
	{
		cin >> input;
		if (input == 0)
		{
			break;
		}
		sum += input;
		cout <<"sum:" << sum <<endl;
	}
}

void test5_4()
{
	double daphne = 100, cleo = 100 ;
	for (int i = 1; ; i++)
	{
		daphne += 100 * 0.1;
		cleo = cleo + cleo * 0.05;
		if (cleo > daphne)
		{
			cout << i;
			break;
		}
	}
}

void test5_5()
{
	string months[12] = { "January","February","March","April","May","June","July","August","September","October", "November","December" };
	int books[12];
	int sum = 0;
	for (int i = 0;i < 12;i++)
	{
		cout <<endl << months[i] <<":" ;
		cin >> books[i];
		sum += books[i];
	}
	cout << "\nsum:" << sum;
}

void test5_6()
{
	string months[12] = { "January","February","March","April","May","June","July","August","September","October", "November","December" };
	int books[4][13];
	books[0][0] = 0;
	for (int i = 1;i < 4;i++)
	{
		books[i][0] = 0;
		for (int j = 1;j < 13;j++)
		{
			cout << "\n第" << i << "年" << months[j-1] << ":";
			cin >> books[i][j];
			books[i][0] += books[i][j];
		}

		cout << "\n第" << i << "年：" << books[i][0];

		books[0][0] += books[i][0];
	}
	cout << "\nsum:" << books[0][0];
}

struct car
{
	string producer;
	int m;
};
void test5_7()
{
	string name;
	int cars = 0;
	cout << "how manay cars:";
	cin >> cars;
	struct car *arr = new car[cars];
	for (int i = 0 ; i < cars ; i++)
	{
		cout << "Car #" << i << endl;
		cout << "Please enter the make:";
		getchar();
		getline(cin, arr[i].producer);
		cout << "\nPlease enter the year made:";
		cin >> arr[i].m;

	}
	for (int i = 0; i < cars;i++)
	{
		cout << arr[i].m << " " << arr[i].producer << endl;
	}
}

void test5_8()
{
	char words[20];
	int i = 0;
	while (cin >> words)
	{
		if (strcmp(words, "done")==0) break;
		i++;
	}
	cout << i;
}

void test5_9()
{
	string str;
	int i = 0;
	while (cin >> str)
	{
		if (str == "done") break;
		i++;
	}
	cout << i;
}

void test5_10()
{
	int i = 0 ;
	cout << "please neter a number:";
	cin >> i;
	for (int j = 1; j <= i; j++)
	{
		for (int n = 0; n < (i - j);n++)
		{
			cout << ".";
		}
		for (int n = 0; n < j; n++)
		{
			cout << "*";
		}
		cout << endl;
	}
}