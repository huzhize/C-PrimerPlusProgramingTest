#pragma once
/*
	date:2019/5/24
	µÚ12ÕÂ ±à³ÌÁ·Ï°12_2
*/
#include<iostream>

class String2
{
	int len;
	char *c;
public:
	String2();
	String2(const char * str);
	String2(const String2 &);
	~String2();
	String2 & operator+(const String2 &);
	String2 & operator=(const String2 &);
	void StringLow();
	void StringUpper();
	int find(char c);
	void show();
};

