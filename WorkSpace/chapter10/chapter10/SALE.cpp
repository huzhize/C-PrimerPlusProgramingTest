#include "pch.h"
#include "SALE.h"
#include<iostream>
#include<string>
void SALES::Sales::setSales(const double ar[], int n)
{
	for (int i = 0;i < n;i++)
	{
		sales[i] = ar[i];
	}
}

void SALES::Sales::setSales()
{
	int i = 0;
	max = sales[0];
	min = sales[0];
	average = 0;
	while (sales[i])
	{
		if (max < sales[i])
		{
			max = sales[i];
		}
		if (min > sales[i])
		{
			min = sales[i];
		}
		average += sales[i];
		i++;
	}
	if (i == 0) return;

	average = average /i;
}

void SALES::Sales::showSales() const
{
	std::cout << "average:" << average << "\tmax:" << max << "\tmin" << min;
}