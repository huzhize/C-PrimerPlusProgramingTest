#include "pch.h"
#include "Stack.h"
#include <iostream>
//10_5
Stack::Stack()
{
	top = 0;
}


Stack::~Stack()
{
}

bool Stack::isempty() const 
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const customer & c)
{
	if (top < MAX-1)
	{
		cs[++top] = c;
		return true;
	}
	return false;
}

bool Stack::pop(customer & c)
{
	if (top > 0)
	{
		c = cs[--top];
		sumPayment += c.payment;
		std::cout << "sumPayment:" << sumPayment;
		return true;
	}
	return false;
}