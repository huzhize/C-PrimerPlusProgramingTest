#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

void test4_1()
{
	const int length = 30;
	char firstName[length] ;
	char lastName[length];
	char grade = 0;
	int age = 0;
	cout << "What is your first name?";
	cin.getline(firstName,length);
	cout << "What is your last name?";
	cin.getline(lastName,length);
	cout << "What letter grade do you deserve?";
	cin >> grade;
	cout << "What is your age?";
	cin >> age;
	grade++;
	cout << "Name:" << firstName << "," << lastName << endl;
	cout << "Grade" << grade << "\nAge:" << age;

}

void test4_2()
{
	const int ArSize = 20;
	string name;
	string dessert;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert\n";
	getline(cin, dessert);
	cout << name << endl << dessert;
	return;
}

void test4_3()
{
	const int length = 20;
	char str1[length], str2[length],str3[40];
	cout << "first name:";
	cin.getline(str1, 20);
	cout << "last name:";
	cin.getline(str2, 20);
	strcat_s(str1, " , ");
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	cout << "name:"<<str3;
	
}

void test4_4()
{
	string firstName, lastName;
	cout << "first name:";
	cin >> firstName;
	cout << "last name:";
	cin >> lastName;
	string name = firstName + lastName;
	cout << "full name:" << name;
}

struct CandyBar
{
	string brand;
	float weight;
	int calorie;
};

//打印结构体的功能函数
void printSt(struct CandyBar snack)
{
	cout << "brand:" << snack.brand << " weight:" << snack.weight << " calorie:" << snack.calorie<<endl;
}

//结构体初始化方式
void test4_5()
{
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	snack.weight = 250;
	cout << "brand:" << snack.brand << " weight:" << snack.weight << " calorie:" << snack.calorie;

}

void test4_6()
{
	CandyBar cbs[3] = 
	{
		{ "name1", 11.3, 290 },{ "name2", 21.5, 102 }, {"name3", 32.43, 220}
	};
	for (CandyBar cb : cbs)
	{
		printSt(cb);
	}
}

struct Pisa
{
	string brand;
	float weight;
	int calorie;
};

void test4_7()
{
	CandyBar cb;
	cout << "enter brand:";
	cin >> cb.brand;
	cout << "enter diameter:";
	cin >> cb.weight;
	cout << "enter weight:";
	cin >> cb.calorie;
	printSt(cb);

}

void test4_8()
{
	CandyBar *pcb = new CandyBar;
	cout << "enter diameter:";
	cin >> pcb->weight;
	cout << "enter brand:";
	cin >> pcb->brand;
	cout << "Enter weight:";
	cin >> (*pcb).calorie;
	printSt(*pcb);
	delete pcb;
}

void test4_9()
{
	CandyBar *cbs = new CandyBar[3];
	cbs[0] = { "name1", 11.3, 290 };
	cbs[1] = { "name2", 21.5, 102 };
	cbs[2] = { "name3", 32.43, 220 };
	for (int i=0;i<3;i++)
	{
		printSt(cbs[i]);
	}
	delete[] cbs;
}

void test4_10()
{
	array<double, 4> arr;
	double sum = 0;
	for (int i = 0;i < 4;i++)
	{
		cout << "\n输入第" << i + 1 << "次成绩：";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << endl;
	for (double d : arr)
	{
		cout << d<<endl;
	}
	cout << "平均成绩：" << sum / 4;
}