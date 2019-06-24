#pragma once
class Main
{
private:
	int len;
	char *ar;

public:
	Main();
	Main(int a);
	~Main();
	virtual void show();
};

class Temp :public Main
{
private:
	int tlen;
	char *tar;
public:
	Temp();
	Temp(int a);
	~Temp();
	virtual void show();
};

