// chapter17_IO_File.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void m17_1();
void m17_2();
void m17_3();
void m17_4();
void m17_5();
void m17_6();
void m17_7();
void m17_8();
void m17_9();
void m17_10();
void m17_16();
void m17_18();
void m17_19();
void test17_1();
void test17_2();
void test17_3();
void test17_4();
void test17_5();
void test17_7();
using namespace std;
int main()
{
	//cout.put('a');
	//cout.write("\nhuzhzie",4);
	//test17_1();
	test17_7();
}


//输入输出

//cout
//程序清单17.1
void m17_1()
{
	using namespace std;
	const char * state1 = "abcdefghij";
	const char * state2 = "Hijklm";
	const char * state3 = "Euphoria";
	int len = strlen(state2);
	int i;
	for (i = 1;i <= len;i++)
	{
		cout.write(state2, i);
		cout << endl;
	}
	cout << "==========\n";
	for (int i = len;i > 0;i--)
	{
		cout.write(state2, i);
		cout << endl;
	}
	cout << "==========\n";
	cout.write(state2, len + 5) << endl;
	return;
}

//程序清单17.2
void m17_2()
{
	using namespace std;
	cout << "12345678901234567890\n";
	char ch = 'K';
	int t = 273;
	cout << ch << ":\n";
	double f1 = 1.200;
	cout << f1 << ":\n";
	cout << (f1 + 1.0) / 9.0 << ":\n";

	double f2 = 1.67E2;
	double f3 = 2.3e-4;
	cout << f2 << ":\n";
	cout << f3 / 10 << ":\n";
	return;
}

//程序清单17.3			std::hex  std::oct 	
void m17_3()
{
	using namespace std;
	int n = 160;
	cout << n << "\t" << n * n << endl;	//默认十进制输出
	cout << hex;						//设置十六进制输出
	cout << n << "\t" << n * n << endl;
	cout << oct << n << "\t" << n * n << endl;//设置八进制输出
	dec(cout);							//十进制输出
	cout << n << "\t" << n * n << endl;
}

//程序清单17.4	cout.width(n)	只对下一次cout有效,然后就恢复默认值了
void m17_4()
{
	using namespace std;
	int w = cout.width(30);
	cout << "default field width = " << w << ":\n";
	cout.width(5);
	cout << "N" << ':' ;	//"N:"和"N"<<':'结果显示不一样
	cout.width(8);
	cout << "N * N:\n";
	for (long i = 1;i <= 100;i *= 10)
	{
		cout.width(5);
		cout << i << ":";
		cout.width(8);
		cout << i * i << ":\n";
	}
	return;
}

//程序清单17.5	cout.fill('*')
void m17_5()
{
	using namespace std;
	cout.fill('*');
	const char * staff[2] = {"nothing could better","nothing could better"};
	long bonus[2] = { 900,1350 };
	for (int i = 0;i < 2;i++)
	{
		cout << staff[i] << ":$";
		cout.width(7);
		cout << bonus[i] << ":\n";
	}
	return;
}

//程序清单17.6	cout.precision(2); 设置精度
void m17_6()
{
	using namespace std;
	float f1 = 20.40;
	float f2 = 1.9 + 8.0 / 9.0;
	cout << f1 << endl << f2 << endl;
	cout.precision(2);				//设置精度2，C++默认精度为6，在默认精度下小数点后面的0将不会显示出来
	cout << f1 << endl << f2 << endl;
	return;
}

//程序清单17.7			cout.setf(ios_base::showpoint)
void m17_7()
{
	using namespace std;
	using namespace std;
	float f1 = 20.40;
	float f2 = 1.9 + 8.0 / 9.0;
	cout.setf(ios_base::showpoint);	//显示末尾小数点
	cout << f1 << endl << f2 << endl;
	cout.precision(2);				
	cout << f1 << endl << f2 << endl;
	return;
}

//程序清单17.8
void m17_8()
{
	using namespace std;
	int n = 10010;
	cout.setf(ios_base::showpos);	//显示正数前面的 + 号
	cout << n <<endl ;
	cout << hex << n << endl;
	cout.setf(ios_base::uppercase);
	cout << n << endl;
	cout.setf(ios_base::showbase);
	cout << n << endl;
	cout << true << endl;
	cout.setf(ios_base::boolalpha);
	cout << true << endl;
}

//程序清单17.9
void m17_9()
{
	cout.setf(ios_base::left, ios_base::adjustfield);
}

void m17_10() {}

//cin

//文件输入和输出

//程序清单17.16
void m17_16()
{
	using namespace std;
	string filename;
	cout << "输入新建文件名：";
	cin >> filename;

	ofstream fout(filename.c_str());	//打开一个文件，若该文件不存在将创建一个新文件，若已存在则清空文件内容；
	fout << "Hello World!";
	string username;
	cout << "input username:";
	cin >> username;
	fout << username;
	fout.close();

	ifstream fin(filename.c_str());
	char ch;
	while (fin.get(ch))
	{
		cout << ch;
	}
	fin.close();
}

//程序清单17.18
void m17_18()
{
	using namespace std;
	const char * file = "huzz";
	char ch;
	ifstream fin;
	fin.open(file);
	if (fin.is_open())
	{
		while (fin.get(ch))
		{
			cout << ch;
			fin.close();
		}
	}

	ofstream fout(file, ios::out | ios::app);
	if (!fout.is_open())
	{
		cerr << "Error\n";
		exit(EXIT_FAILURE);
	}
	cout << "input username:";
	string name;
	while (getline(cin, name) && name.size() > 0)
	{
		fout << name;
	}
	fout.close();

	fin.clear();
	fin.open(file);
	if (fin.is_open())
	{
		cout << "文件内容:\n";
		while (fin.get(ch))
		{
			cout << ch;
		}
		fin.close();
	}
	return;
}

//程序清单17.19
inline void eatline() { while (std::cin.get() != '\n') continue; }
struct planet
{
	char name[20];
	double population;
	double g;
};
const char * file = "planets.dat";
void m17_19()									//binary read write
{
	using namespace std;
	planet pl;
	cout << fixed << right;
	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		while (fin.read((char*)&pl, sizeof pl))	//将pl从文件中读取出来
		{
			cout << "name:" << pl.name << "  population:" << pl.population << "  g:" << pl.g << endl;
		}
		fin.close();
	}

	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open())
	{
		exit(EXIT_FAILURE);
	}
	cout << "name:";
	cin.get(pl.name, 20);
	while (pl.name[0] != '\0')
	{
		eatline();
		cout << "number:";
		cin >> pl.population;
		cout << "number:";
		cin >> pl.g;
		eatline();
		fout.write((char *)&pl, sizeof pl);		//将pl存入文件
		cout << "continue:\n";
		cin.get(pl.name, 20);
	}
	fout.close();




}

//编程练习

void test17_1()
{
	char str[50];
	cin.get(str,50 ,'$');	//str是$符号之前的字符串
	cout<<strlen(str);
}

void test17_5()
{
	ofstream fout;
	fout.open("friend.dat");
	fout << "huzhize" << endl;
	fout << "huzhize" << endl;
	fout << "huzhize" << endl;
	fout.close();

	ifstream fin;
	string str;
	fin.open("friend.dat");
	while (getline(fin, str))
	{
		cout << str << endl;
	}
	fin.close();
}

void test17_7()
{
	vector<string> arr = {"one","two","three","four"};
	int len;
	string st;
	
	ofstream fout;
	fout.open("E:\\test17_7.txt");
	if (!fout.is_open()) return;
	for (int i = 0;i < arr.size();i++)
	{
		fout << arr.at(i).length()<<endl;
		fout << arr.at(i) << endl;
	}
	fout.close();

	ifstream fin;
	fin.open("E:\\test17_7.txt");
	if (fin.is_open()) return;
	while(getline(fin, st))
	{
		cout << st << endl;
	}
	fin.close();
}