#pragma once
class ABC
{
private:
	int a;
	int b;
	int c;
public:
	ABC();
	ABC(int x, int y, int z);
	~ABC() {};
	virtual void view();
};

class BaseDma : public ABC
{
private:
	int sum;
public:
	BaseDma(int x);
	~BaseDma() {};
	
	virtual void view();
};

class LacksDma : public ABC
{
private:
	int sum;
public:
	LacksDma(int x, int y);
	~LacksDma() {};
	virtual void view();
};

class HasDma : public ABC
{
private:
	int sum;
public:
	HasDma(int x, int y, int z);
	~HasDma() {};
	virtual void view();
};





