#include "pch.h"
#include "Main.h"
#include "iostream"

Main::Main()
{
	len = 10;
	std::cout << "len:\t" << len << "\tMain\n";
}
Main::Main(int a)
{
	len = a;
	std::cout << "a:\t" << a << "\tMain\n";
}
Main::~Main()
{
	std::cout << "len:\t" << len << "\t~Main\n";
}

void Main::show()
{
	std::cout << "len:\t" << len << "\tMain_Show\n";
}
//=========================================
Temp::Temp()
{
	tlen = 20;
}
Temp::Temp(int a)
{
	tlen = a;
	//this->Main::Main(a);
	std::cout << "a:\t" << a << "\tTemp\n";
}
Temp::~Temp()
{
	std::cout << "tlen:\t" << tlen << "\t~Temp\n";
}
void Temp::show()
{
	std::cout << "tlen:\t" << tlen << "\tTemo_Show\n";
}

