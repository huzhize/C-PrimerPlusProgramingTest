#include "pch.h"
#include "Golf.h"
#include<iostream>
#include<string>
using namespace std;
Golf::Golf()
{
}
Golf::~Golf()
{
}
void Golf::setGolf(const char * fn, int hc)
{
	strcpy(fullname, fn);
	handicap = hc;
}

void Golf::showGolf() const
{
	cout << "fullname:" << fullname << " handicap:" << handicap;
}
