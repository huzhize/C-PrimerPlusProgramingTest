#include "pch.h"
#include "ABC.h"
#include <iostream>

ABC::ABC() { a = b = c = 0; }
ABC::ABC(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}
void ABC::view()
{
	std::cout << "a:" << a << " b:" << b << " c:" << c << "\n";
}
//===================
LacksDma::LacksDma(int x, int y)
{
	ABC::ABC(x, y, 0);
}
void LacksDma::view()
{
	std::cout << "LackDma";
}
//====================
BaseDma::BaseDma(int x)
{
	this->ABC::ABC(x,x,x);
}

void BaseDma::view()
{
	std::cout << "BaseDma";
}
//=======================
HasDma::HasDma(int x, int y, int z)
{

}
void HasDma::view()
{
	std::cout << "has";
}

