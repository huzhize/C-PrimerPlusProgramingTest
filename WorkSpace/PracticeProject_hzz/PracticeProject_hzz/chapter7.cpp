#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
/*
	函数
	函数指针

*/

using namespace std;

void init(int i,int j)
{
	cout << "第" << i << "章 编程练习第" << j << "题\n";
}

double getAvg(double i, double j);
void test7_1()
{
	double i, j;
	cout << "简单函数调用\n输入两个数计算其平均数：\n";
	while (true)
	{
		cin >> i >> j;
		if (i == 0 || j == 0) break;
		cout << "平均数：" << getAvg(i, j) << endl << "继续输入两个数，输入0退出.\n";
	}

}

double getAvg(double i, double j)
{
	return (i + j) / 2;
}

//=====================================7-2===========================
float* inputArr();
void showArr(float arr[]);
float getAvgOfArr(float arr[]);

void test7_2()
{
	float *arr = inputArr();
	showArr(arr);
	getAvgOfArr(arr);
}
//输入数组
float* inputArr()
{
	float arr[10];
	int i = 0;
	cout << "初始化一个长度为10的float数组，当输入的数小于0时提前结束输入。\n输入第1个数：";
	while (i<10&& cin >> arr[i]) {
		if (arr[i] < 0)
		{
			break;
		}
		i++;
		cout << "输入第" << i + 1 << "个数：";
	}
	return arr;
}

//打印数组
void showArr(float arr[])
{
	int size = sizeof arr;
	float sum = 0;
	for (int i = 0;i < size;i++)
	{
		sum += arr[i];
		cout << "第" << i + 1 << "次成绩：" << arr[i] << endl;
	}
}

//计算数组平均数
float getAvgOfArr(float arr[])
{
	int size = sizeof arr;
	float sum = 0;
	for (int i = 0;i < size;i++)
	{
		sum += arr[i];
	}
	cout << "arr.size:" << size;
	return sum / size;
}

//=======================7-3===========================
struct box;
void showBox(struct box b);
void setBox(struct box *b);
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void test7_3()
{
	struct box b = 
	{
		"wjt" , 
		20.2 , 
		12.3 , 
		3.2 ,
		13.9
	};
	showBox(b);
	setBox(&b);
	showBox(b);

}


void showBox(struct box b)
{
	cout << "maker:" << b.maker << " height:" << b.height << " width:" << b.width << " length:" << b.length << " volume:" << b.volume << endl;
}

void setBox(struct box *b)
{
	strcpy(b->maker, "胡志泽" );	//只能通过此种方式赋值
	b->height = 10;
	b->width = 10;
	b->length = 10;
	b->volume = 10;
}


long double prbability(unsigned numbers, unsigned picks);
void test7_4()
{
	cout << prbability(0, 0);
}

long double prbability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n = 0;

	return (5 * 4 * 3 * 2 * 1.0) / (47 * 46 * 45 * 44 * 43 * 42.0)*1.0 / 27.0;
}
//======================================7-5================================
long foo(long n);
void test7_5()
{
	int i = 0;
	cout << "递归求阶乘。\n";
	for (i = 1;i > 0;)
	{
		cout << "enter a number:";
		cin >> i;
		cout << "阶乘：" << foo(i)<< endl;
	}
}
long foo(long n)
{
	if (n == 0) return 1;
	return n * foo(n - 1);

}
//==============================================7-6========================
int Fill_array(double arr[], int len);
void Show_array(double arr[], int len);
void Reverse_Array(double arr[], int len);
void test7_6()
{
	double arr[10];
	Fill_array(arr, 10);
	Show_array(arr, 10);
	Reverse_Array(arr + 1, 8);
	Show_array(arr, 10);


}

int Fill_array(double arr[],int len)
{
	int count = 0;
	for (;count < len;count++)
	{
		cout << "请输入一个double类型的数字：";
		cin >> arr[count];
	}
	return ++count;
}

void Show_array(double arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << " 第"<<i+1<<"个数是："<<arr[i];
	}
}

void Reverse_Array(double arr[], int len)
{
	double t = 0;
	for (int i = 0;i < len;i++)
	{
		if((len-i-1<=i)) break;
		t = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = t;
	}
}

//===============7-7=======================

const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
void test7_7()
{
	double properties[Max];
	
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor:";
		double factor = 0;
		while (!(cin >> factor))	//错误输入
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "输入格式错误，请输入一个数字：";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done!";
	cin.get();
	return;
}

int fill_array(double ar[],int limit)
{
	double temp;
	int i;
	for (i = 0;i < limit;i++) 
	{
		cout << "Enter value#" << (i + 1) << ":";
		cin >> temp;
		if (!cin)	//输入错误
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "输入错误，输入终止";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n)
{
	cout << "打印数组中的内容：\n";
	for (int i = 0;i < n;i++) 
	{
		cout << "Propetty #" << i + 1 << ": $";
		cout << ar[i] << endl;
	}

}

void revalue(double r, double ar[], int n)
{
	cout << "将数组中的"<<n<<"个元素都加上" << r;
	for (int i = 0;i < n;i++)
	{
		ar[i] += r;
	}
}

//============================7-8========================
const string snames[4] = { "Spring","Summer","Fall","Winter" };
void fill(string ps[]);
void show(string *ps);
void test7_8()
{
	string expenses[4];
	fill(expenses);
	show(expenses);
}
void fill(string ps[])
{
	for (int i = 0;i < 4;i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> ps[i];
	}
}
void show(string *ps)
{
	for (int i = 0;i < 4;i++)
	{
		cout<<snames[i]<<"expenses: "<<ps[i]<<endl;
	}
}

//===========================7-9=========================

const int SLEN = 30;
struct student;
int getInfo(struct student pa[], int n);
void display1(struct student st);
void display2(const student*ps);
void display3(const student pa[], int n);
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
void test7_9()
{
	cout << "Enter class size:";
	int class_size = 0;
	cin >> class_size;
	while (cin.get() != '\n')
	{
		continue;
	}
	student *  ptr_stu = new student[class_size];
	int entered = getInfo(ptr_stu, class_size);
	for (int i = 0;i < entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done!";
	return;
}

//初始化该结构体数组，依次录入student信息
int getInfo(student pa[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "#" << i + 1 << "\nEnter fullname:";
		cin>>pa[i].fullname;
		cout << "Enter hobby:";
		cin >> pa[i].hobby;
		cout << "Enter ooplevel:";
		cin >> pa[i].ooplevel;
	}
	return 0;
}

void display1(student st)
{
	cout << st.fullname << st.hobby << st.ooplevel;
}

void display2(const student*ps) 
{
	cout << *ps->fullname << *ps->hobby;
	cout<<ps->ooplevel;

}

void display3(const student pa[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << pa[i].fullname<<pa[i].hobby<<pa[i].ooplevel;
	}
}
//=============================7-10===========================================
//调用带有函数指针参数的函数
double calculate(double d1, double d2, double(*fo)(double, double));
double add(double x, double y);
void  test7_10()
{
	double d1 = 1922.6, d2 = 5245.6;
	cout << "result:" << calculate(d1, d2,add);
}

//函数指针作为函数参数
double calculate(double d1, double d2, double (*fo)(double,double))
{
	double result = 0;
	result = (*fo)(d1, d2);
	return result;
}

double add(double x, double y)
{
	return x + y;
}