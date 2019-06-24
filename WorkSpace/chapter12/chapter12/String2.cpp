#include "pch.h"
#include "String2.h"
#include <string>
#include<iostream>

String2::String2()
{
	len = 0;
}

String2::String2(const char * str)
{
	len = strlen(str)+1;
	c = new char[len];
	strcpy(c, str);
	c[len] = '\0';
}

String2::String2(const String2 & str)
{
	this->len = str.len;
	strcpy(c, str.c);
	//this->c = str.c;
}

String2::~String2()
{
	delete[] c;
	std::cout << "delete";
}

String2 & String2::operator+(const String2 & str)	//!
{
	using namespace std;
	String2 sum;
	sum.len = len + str.len;
	strcat(sum.c, c);
	strcat(sum.c, str.c);
	return sum;
}

String2 & String2::operator=(const String2 & str)
{
	String2 r;
	r.len = str.len;
	strcpy(r.c, str.c);
	return r;
}

void String2::StringLow()
{
	for (int i = 0;i < len;i++)
	{
		if (isalpha(c[i]))
		{
			c[i] = tolower(c[i]);
		}
	}
}

void String2::StringUpper()
{
	for (int i = 0;i < len;i++)
	{
		if (isalpha(c[i]))
		{
			c[i] = toupper(c[i]);
		}
	}
}

int String2::find(char a)
{
	int sum = 0;
	for (int i = 0;i < len;i++)
	{
		if (c[i] == a)
			sum++;
	}
	return sum;
}

void String2::show()
{
	//std::cout << "len:" << len << "  c:" << c ;
	return;
}