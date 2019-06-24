// chapter11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
#include<fstream>
#include <cstdlib>
#include<ctime>
#include "vect.h"
#include "Time.h"
#include "Complex.h"

void test11_1();
void test11_4();
void test11_7();
int main()
{

    std::cout << "Hello World!\n"; 
	std::ofstream of("test11_1.txt");
	if (of.is_open())
	{
		of << "hello World\n";
	}
	of.close();

	test11_7();
}

void test11_1()
{
	using namespace std;

	std::ofstream of("test11_1.txt");

	using VECTOR::Vector;
	srand(time(0));
	double direction;	//极坐标角度
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	std::cout << "Enter target distance (q to quit):";
	while (std::cin >> target)
	{
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
		{
			break;
		}
		std::cout << "Target Distance:" << target << "  Step size:" << dstep << endl;
		of<< "Target Distance:" << target << "  Step size:" << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::Mode::POL);
			result = result + step;
			std::cout << steps << ":(x,y) = (" << result.xval() << "," << result.yval() << ")\n";
			of<< steps << ":(x,y) = (" << result.xval() << "," << result.yval() << ")\n";
			steps++;
		}
		std::cout << "After" << steps++ << "steps,the subject has the following location:\n";
		std::cout << result << endl ;
		result.polar_mode();
		std::cout << "or\n" << result << endl;
		std::cout << "Avenger outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		std::cout << "Enter target distance (q to quit) :";
	}
	std::cout << "end";
	std::cin.clear();
	of.close();
}

void test11_4()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << aida << ";" << tosca << endl;

	temp = aida + tosca;
	cout << temp;
	temp = aida * 1.2;
	cout << temp;
}

void test11_7()
{
	using namespace std;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);//设置使用定点表示法
	std::cout.precision(3);	//显示三位小数
	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter :\n";
	while (cin >> c)
	{
		cout << "c is: " << c;
		cout << " complex conjugate is " << ~c;
		cout << "a is " << a;
		cout << " a + c is " << a + c;
		cout << " a - c is " << a - c;
		cout << "a * c is " << a * c;
		cout << "2 * c is" << c * 2;
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Done!";
	return;
}
