#pragma once
#include<iostream>
class Complex
{
private:
	double r;
	double v;
public:
	Complex();
	Complex(double x, double y);
	~Complex();

	//运算符重载
	Complex operator+(const Complex & t);
	Complex operator-(const Complex & t);
	Complex operator*(const Complex & t);
	Complex operator*(double d) const;
	Complex operator~();
	//输入输出运算符重载
	friend std::ostream & operator<<(std::ostream & os, const Complex & t);
	friend std::istream & operator>>(std::istream & is, Complex & t);
};

