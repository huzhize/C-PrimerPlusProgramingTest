#include "pch.h"
#include "Plorg.h"
#include<iostream>


Plorg::Plorg(int c, const char * n)
{
	strcpy(name, n);
	CI = c;
}

Plorg::~Plorg()
{
}

void Plorg::reset(int CI)
{
	this->CI = CI;
}

void Plorg::show()
{
	using namespace std;
	cout << "name:" << name << "  CI:" << CI << endl;
}
