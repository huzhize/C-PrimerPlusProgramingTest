#include "pch.h"
#include "golf.h"
#include <iostream>
using namespace std;
//golf.cpp -- for pe9-1

golf ann;
void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	if (g.fullname[0])
		return 1;
	return 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(golf & g)
{
	cout << g.fullname << " handicap:" << g.handicap;
}

