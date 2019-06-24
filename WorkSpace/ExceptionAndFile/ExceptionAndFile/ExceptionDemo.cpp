#include "pch.h"
#include "ExceptionDemo.h"
#include<iostream>

ExceptionDemo::ExceptionDemo()
{

}

ExceptionDemo::~ExceptionDemo()
{

}

ExceptionDemo2::ExceptionDemo2(int e) :std::logic_error("Login_error message")
{

}
ExceptionDemo2::ExceptionDemo2():std::logic_error("nothing")
{
	a = 12;
	b = 12;
}

void ExceptionDemo2::foo()
{
	if (a == b)
	{
		throw ExceptionDemo2::ExceptionDemo2(0);
	}
}