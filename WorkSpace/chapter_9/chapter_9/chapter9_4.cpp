#include "pch.h"
#include "chapter9.h"
#include<iostream>
namespace SALES
{
	using std::cout;
	using std::cin;
	void setSales(Sales & s, const double ar[], int n)
	{
		for (int i = 0;i < n;i++)
		{
			s.sales[i] = ar[i];
		}
	}

	void setSales(Sales & s)
	{
		int i = 0;
		double sum = 0;
		double max = s.sales[0];
		double min = s.sales[0];
		double t;
		while (s.sales[i])
		{
			sum += s.sales[i];
			if (s.sales[i] > max)
			{
				max = s.sales[i];
			}
			if (s.sales[i] < min)
			{
				min = s.sales[i];
			}
			i++;
		}
	}

	void showSales(const Sales & s)
	{
		cout << "average:" << s.average << " max:" << s.max << " min:" << s.min;
	}
}