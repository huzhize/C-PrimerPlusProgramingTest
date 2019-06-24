// ExceptionAndFile.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*  
   第15章 友元、异常和其它
   第17章 输入输出和文件

*/

#include "pch.h"
#include <iostream>
#include "Tv.h"
#include "exc_mean.h"
#include "ExceptionDemo.h"
#include <cmath>
#include "Sales.h"
void testTv();
void test15_2();
void testDemo();
void test15_4();
int main()
{
    
}

void testDemo()
{
	ExceptionDemo2 e;
	try{
		e.foo();
	}
	catch (ExceptionDemo2 e2)
	{
		e2.what();
	}
}



//15_1
void testTv()
{
	Tv t;
	Remote r;
	t.setMode(r, 1);
	r.showMode();
}

//15_2
double hmean(double a, double b);
double gmean(double a, double b);
void test15_2()
{
	using namespace std;
	double x, y, z;
	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			cout << "Geometroc mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
			cout << "Enter next set of number <q to quit>:";
		}
		catch (bad_hmean & bg)
		{
			bg.mesg();
			cout << "Try again.\n";
			continue;
		}
		catch (bad_gmean & hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
			cout << "Sorry,you don't get to play any more.\n";
			break;
		}
	}
	cout << "Bye!\n";
	return;
}
double hmean(double a, double b)
{
	if (a == -b)
	{
		throw bad_hmean(a,b);
	}
	return 2 * a*b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
	{
		throw bad_gmean(a, b);
	}
	return std::sqrt(a*b);
}

void test15_4()
{
	double vals1[12] = { 1220,1100,1122,2212,1232,2334,2884,2393,3302,2922,3002,3544 };
	double vals2[12] = { 12,11,22,21,32,34,28,29,33,29,32,35 };
	Sales sales1(2011, vals1, 12);
	LabeledSales sales2("blogstar", 2012, vals2, 12);

	cout << "First try block:\n";
	try {
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for (int i = 0;i < 12;i++)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5) cout << endl;
		}
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for (int i = 0;i < 12;i++)
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5) cout << endl;
		}
		cout << "End of try block;\n";
	}
	catch (LabeledSales::nbad_index & bad)
	{
		bad.what();
	}
	catch (Sales::bad_index & bad)
	{
		bad.what();
	}
	cout << "\nnext try block:\n";
	try 
	{
		sales2[2] = 37.5;
		sales2[20] = 23345;
		cout << "End of try block 2.\n";

	}
	catch (LabeledSales::nbad_index & bad)
	{
		bad.what();
	}
	catch (Sales::bad_index & bad)
	{
		bad.what();
	}
	cout << "done\n";
	return;

}



