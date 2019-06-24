#pragma once

/*
	date:2019/5/24
	第12章 编程练习12_1
*/

class Cow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow &);	//复制构造函数
	~Cow();
	Cow & operator=(const Cow & c);
	void showCow() const;
};

