// chapter13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Cd.h"
#include "ABC.h"
#include "Main.h"
#include "Port.h"

using namespace std;
void test13_1();
void Bravo(const Cd & disk);
void test13_2();
void test13_3();
void test13_4();
void MainTestExtends();
void MainTestDynamic(int l,const char * str);
int main()
{
    std::cout << "Hello World!\n"; 
	test13_1();
	//MainTestDynamic(10,"sdf");
	//test13_4();
}
void MainTestDynamic(int l, const char * str)
{
	int len = strlen(str) + 1;
	char * ar = new char[len];
	strcpy(ar, str);
	cout << ar;
	delete[] ar;
}

void MainTestExtends()
{
	Main m(1);
	Temp t(2);
	//m.show();
	//t.show();
	Main* nm = new Main(3);
	//nm->show();
	delete nm;

	cout << "virtual test:\n";
	Main * tm = new Temp(123);
	tm->show();

	Main *ma = &t;
	Main ma2 = t;
	t.show();	//Temp的show
	ma->show();	//调用子类show
	ma2.show();	//调用父类show
}
void test13_1()
{
	
	Cd c1("c1", "lb1", 14, 35.5);
	Classic c2 = Classic("cla2", "lab2", "production2", 2, 57.17);
	/*
	Cd *pcd = &c1;
	cout << "打印结果：\n";
	c1.Report();
	c2.Report();

	pcd->Report();
	pcd = &c2;

	pcd->Report();

	cout << "Bravo:\n";
	Bravo(c1);
	Bravo(c2);

	Classic copy;
	copy = c2;
	copy.Report();
	*/
	
}
void Bravo(const Cd & disk)
{
	disk.Report();
}

void test13_3()
{
	ABC *ar[3];
	ar[0] = new LacksDma(0, 0);
	ar[1] = new BaseDma(0);
	ar[2] = new HasDma(1, 1, 1);
	for (int i = 0;i < 3;i++)
	{
		ar[i]->view();
	}

}

void test13_4()
{
	VintagePort vp("hu",12,"zz",13);
	cout << vp;
}
