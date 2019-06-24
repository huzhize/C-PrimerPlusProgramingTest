#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct stringy
{
	char * str;
	int ct;
};
void set(stringy & sy, char arr[])
{
	sy.str = arr;
}
void show(const stringy & sy,int i=1)
{
	for(int j=0;j<i;j++)
	cout << sy.str<<endl;
}

void show(string str)
{
	cout << str<<endl;
}

void test8_4()
{
	stringy sy;
	char c[] = "Hello World ";
	set(sy, c);
	show(sy);
	show(sy, 2);
	c[0] = 'D';
	c[1] = 'u';
	show(sy);
	show("Done");
	return;
}