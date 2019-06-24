#include "pch.h"
#include "Cow.h"
#include<iostream>

Cow::Cow()
{
	strcpy(name, "huzz");
	hobby = "ba";
	weight = 0.0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);

	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy(hobby, ho);
	
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	Cow result;
	strcpy(result.name, c.name);
	strcpy(result.hobby, c.hobby);
	result.weight = c.weight;
	return result;
}

void Cow::showCow() const
{
	using namespace std;
	cout << "name:" << name << "  hobby:" << hobby << "  weight:" << weight;
}
