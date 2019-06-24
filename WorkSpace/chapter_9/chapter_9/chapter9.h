#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales & s);
}

struct chaff
{
	char dross[20];
	int slag;
};

void test9_3();

void test9_2();
void test8_4();