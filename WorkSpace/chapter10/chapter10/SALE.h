#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		void setSales(const double ar[], int n);
		void setSales();
		void showSales() const;

	};
}
