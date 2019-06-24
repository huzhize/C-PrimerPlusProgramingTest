#include "pch.h"
#include "Cd.h"
#include<iostream>
using namespace std;
Cd::Cd()
{
	len = 3;
	performers = new char[len];
	strcpy(performers, "no");
	performers[2] = '\0';

	strcpy(label, "label");
	selections = 0;
	playtime = 0;

}

Cd::Cd(const char * s1,const char * s2, int n, double x)
{
	len = strlen(s1)+1;
	performers = new char[len];
	strcpy(performers, s1);
	performers[len - 1] = '\0';

	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{

	len = d.len;
	(performers) = (d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete[] performers;
}

void Cd::Report() const
{
	cout << "performers:" << performers << "  label:" << label << " selections:" << selections << "  playtime:" << playtime <<"\n" ;
}

Cd & Cd::operator=(const Cd & d)
{
	Cd r;
	r.len = d.len;
	r.performers = new char[r.len];
	strcpy_s(r.performers, len,d.performers);
	strcpy(r.label, d.label);
	r.selections = d.selections;
	r.playtime = d.playtime;
	return r;
}
//==============Classic=================
Classic::Classic()
{
	Cd::Cd();
	strcpy(production, "nothing");
}

Classic::Classic(const char * s1,const char * s2, const char * p, int n, double x)
{
	Cd::Cd(s1, s2, n, x);	//此处的this必须加上，否则无法初始化成员变量
	strcpy(production, p);
}

void Classic::Report() const
{
	Cd::Report();
	cout << " production:" << production << "\n";
}

Classic & Classic::operator=(const Classic & d)
{
	Classic r = d;
	strcpy(r.production, d.production);
	return r;
}
Classic::~Classic()
{
	//Cd::~Cd();	//这样做会到导致调用两次基类的析构函数，即delete两次performers，出错！
}
