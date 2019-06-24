#pragma once
/*
	date:2019/5/24
	µÚ12ÕÂ ±à³ÌÁ·Ï°12_3
*/

#ifndef  STOCK_H_
#define STOCK_H_
#include <string>
class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();
	void buy(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;
};

#endif //  STOCK_H_
