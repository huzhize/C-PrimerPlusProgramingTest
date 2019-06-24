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

	//���������
	Complex operator+(const Complex & t);
	Complex operator-(const Complex & t);
	Complex operator*(const Complex & t);
	Complex operator*(double d) const;
	Complex operator~();
	//����������������
	friend std::ostream & operator<<(std::ostream & os, const Complex & t);
	friend std::istream & operator>>(std::istream & is, Complex & t);
};

