#include "pch.h"
#include "Complex.h"
Complex::Complex()
{
	r = 0;
	v = 0;
}
Complex::Complex(double x, double y)
{
	r = x;
	v = y;
}
Complex::~Complex()
{
}

Complex Complex:: operator+(const Complex & t)
{
	Complex result;
	result.r = r + t.r;
	result.v = v + t.v;
	return result;
}

Complex Complex:: operator-(const Complex & t)
{
	Complex result;
	result.r = r - t.r;
	result.v = v - t.v;
	return result;
}

Complex Complex:: operator*(const Complex & t)
{
	Complex result;
	result.r = r * t.r - v * t.v ;
	result.v = t.r * v + t.v * r ;
	return result;
}

Complex Complex:: operator*(double d) const
{
	Complex result;
	result.r = r * d;
	result.v = v * d;
	return result;
}

Complex Complex::operator~()
{
	Complex result;
	result.r = r;
	result.v = -v;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Complex & t)
{
	os << "(" << t.r << ", " << t.v << "i)\n";
	return os;
}

std::istream & operator>>(std::istream & is, Complex & t)
{
	is >> t.r >> t.v;
	return is;
}
