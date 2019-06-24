#include "pch.h"
#include<string>
#include<iostream>
using namespace std;
#include "Person.h"

Person::Person(const string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname, fn);
}
Person::~Person()
{
	cout << "\n***\nend\n***\n";
}

void Person::show() const
{
	cout << "firstname:" << fname << " lastname:" << lname << endl;
}
void Person::FormalShow() const
{
	cout << "lastname:" << lname << "  firstname:" << fname <<endl ;
}
