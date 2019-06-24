#pragma once
//golf.h -- for pe9-1.cpp
const int  len = 10;
struct golf
{
	char fullname[len];
	int handicap;
};
void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(golf & g);
