#pragma once
#include <iostream>
using namespace std;
class Port
{
private:
	char * brand;
	char style[20];
	int bottles;
public:
	Port(const char * br = "none", const char * st = "none", int b = 0) 
	{
		int len = strlen(br) + 1;
		brand = new char[len];
		for (int i = 0;i < len - 1;i++)
		{
			brand[i] = br[i];
		}
		brand[len - 1] = '\0';
		strcpy(style, st);
		bottles = b;
	}
	Port(const Port & p) 
	{
		strcpy(brand, p.brand);
		strcpy(style, p.style);
		bottles = p.bottles;
	}
	virtual ~Port() { delete[] brand; }
	Port & operator=(const Port & p) 
	{
		Port r(p);
		return r;
	}
	Port & operator+=(int b) 
	{
		bottles += b;
		return *this;
	}
	Port & operator-=(int b) 
	{
		bottles -= b;
		return *this;
	}
	int BottleCount() const 
	{
		return bottles; 
	}
	virtual void show() const 
	{
		cout << "Brand:\t" << brand;
		cout << "\nKind:\t" << style;
		cout << "\nBottles:\t" << bottles;
	}
	friend ostream & operator<<(ostream & os, const Port & p) 
	{
		os << p.brand << "," << p.style << "," << p.bottles;
		return os;
	}
};

class VintagePort : public Port
{
private:
	char * nickname;
	int year;
public:
	VintagePort() {}
	VintagePort(const char * br, int b, const char * nn, int y) 
	{
		int l = strlen(br) + 1;
		nickname = new char[l];
		strcpy(nickname, nn);
		nickname[l - 1] = '\0';
		year = y;
		Port::Port(br);
	}
	VintagePort(const VintagePort & vp) 
	{
		Port::Port(vp);
		nickname = vp.nickname;
		year = vp.year;
	}
	~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp) 
	{
		VintagePort r(vp);
		return r;
	}
	void shwo() const 
	{
		Port::show();
		cout << "nickname:" << nickname;
		cout << "\n year:" << year;
	}
	friend ostream & operator<<(ostream & os, const VintagePort & vp)
	{
		
		os << "," << vp.nickname << "," << vp.year;
		return os;
	}

};
