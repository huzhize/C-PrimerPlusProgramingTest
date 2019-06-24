#include "pch.h"
#include "chapter8.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
	第8章主要内容：
	内联函数、引用、模板函数
*/

//=========8-1============引用的简单使用
void test8_1()
{
	int times = 0;
	string str = "嘿嘿";
	printStr8_1(str, times);
	cout << "再次调用：\n";
	printStr8_1(str, times);

}

void printStr8_1(string str, int & t)
{
	t++;
	for (int i = 0;i < t;i++)
	{
		cout << str << endl;
	}
}

//=========8-2============引用结构体的简单使用
struct CandyBar8_2
{
	string brand;
	double weight;
	int ka;
};
void test8_2()
{
	struct CandyBar8_2 cb;
	char str[20] = { "huzz" };
	setCandyBa8_2(cb, str, 12.4, 3);
	printCandyBar(cb);

}

void setCandyBa8_2(CandyBar8_2 & cb,char * brand,double weight,int ka)
{
	cb.brand = brand;
	cb.weight = weight;
	cb.ka = ka;
	return;
}
void printCandyBar(const CandyBar8_2 & cb)
{
	cout << "brand: " << cb.brand << " weight: " << cb.weight << " ka: " << cb.ka;
}

//==================8-3=============字符串的引用
void test8_3()
{
	string str;
	cout << "Enter a string ( q to quit ) : ";
	getline(cin, str);
	while (str != "q")
	{
		strToUpper(str);
		cout << str;
		cout << "\nNext String ( q to quit ): ";
		getline(cin, str);
	}
}
void strToUpper(string & str)
{
	int size = str.size();
	for (int i = 0;i < size;i++)
	{
		if (isalnum(str.at(i)))	//是否为字母字符
		{
			str.at(i) = toupper(str.at(i));
		}
	}
}

//======================8-4==========================


//函数形参的默认值只能在声明时定义，不能在函数定义时定义默认值


void set8_4(StringTest & beany, const char testing[])	//const
{
	
	//strcpy(beany.str, testing);

	int  count = 0;
	//beany.str = testing;	//表达式必须是可修改的左值
	
}
void test8_4()
{
	StringTest st;
	char testing[] = "Reality isn't what it used to be.";
	set8_4(st, testing);

}
void showTest(int i, int j)
{
	cout << i << "  " << j << endl;
}
void showTest(double i, double j)
{
	cout << i << "  " << j << endl;
}

void show(const string &str, int i)
{
	for (int j = 0;j < i;j++)
	{
		cout << str << endl;
	}
}
void show(const StringTest &beany, int i)
{
	for (int j = 0;j < i;j++)
	{
//		cout << "str: " << beany.str <<" ct: " << beany.ct << endl;
	}
}

//==================8-5=====================================简单模板函数的使用
template<typename T>
T max5(T arr[])
{
	T temp;
	temp = arr[0];
	for (int i = 1;i < 5;i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
void test8_5()
{
	int arri[5] = { 12, 15, 45, 85, 425 };
	double arrd[5] = { 123.3, 12.23, 32.5, 12.6, 22.1 };
	cout << "int max:" << max5(arri);
	cout << "\ndouble max:" << max5(arrd);
}

//===========================================8-6====================
//模板函数与具体化
template<typename T>
T maxn(T arr[], int i)
{
	for (int j = 1;j < i;j++)
	{
		if (arr[j] > arr[0])
		{
			arr[0] = arr[j];
		}
	}
	return arr[0];
}

template<> char* maxn(char * arr[], int n)
{
	int *result = new int[n];
	int max_len = 0;
	int index = 0;
	for (int i = 0;i < n;i++)
	{
		result[i] = strlen(arr[i]);
		if (result[i] > max_len)
		{
			max_len = result[i];
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (result[i] == max_len)
		{
			index = i;
			break;
		}
	}
	delete[] result;

	return arr[index];
}
void test8_6()
{
	const char *arr[] = {"one","two","three"} ;	//字符指针数组初始化时注意const，string类型都是const
	cout<<maxn(arr, 3);
}

//============================8-7=============模板函数与具体化的使用======
template <typename T>
void showArray(T arr[], int n);

template <typename T>
void showArray(T * arr[], int n);

template <typename T>
T SumArray(T arr[], int n);
template<> debts SumArray(debts arr[], int n);
struct debts
{
	char name[50];
	double amount;
};
void test8_7()
{
	int things[6] = {13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = 
	{
		{"Ima Wolf" , 2400.0 },
		{"Ura Foxe" , 1300.0 },
		{"Iby Stout", 1800.0 }
	};
	double * pd[3];

	for (int i = 0;i < 3;i++)
	{
		pd[i] = &mr_E[i].amount;
	}
		
	cout << "\n打印int数组信息：";
	showArray(things, 6);
	
	cout << "\n打印debts信息";
	showArray(pd, 3);

	cout << "\n计算things数组和：";
	cout<<SumArray(things, 6);

	cout << "\n计算debts信息";
	cout<<SumArray(mr_E, 3).amount;


	return;
}
template <typename T>
T SumArray(T arr[], int n)
{
	T sum = arr[0];
	for (int i = 1;i < n;i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<> debts SumArray(debts arr[], int n)
{
	for (int i = 1;i < n;i++)
	{
		arr[0].amount += arr[i].amount;
	}
	return arr[0];
}

template <typename T>
void showArray(T arr[], int n)
{
	cout << "Template A:\n";
	for (int i = 0;i < n;i++)
	{
		cout << arr[i]<<' ';
	}
}

template <typename T>
void showArray(T * arr[], int n)
{
	cout << "Template B:\n";
	for (int i = 0;i < n;i++)
	{
		cout << *arr[i] << ' ';
	}
}