#include "pch.h"
#include <iostream>
using namespace std;
void test3_1()
{
	const int EX = 12;
	int heightOfInch = 0;
	cout << "Enter the height:______\b\b\b\b\b\b ";
	cin >> heightOfInch;
	int heightOfFoot = heightOfInch / EX;
	heightOfInch %= EX;
	cout << "The height is :" << heightOfFoot << " feet " << heightOfInch << " inches.";

}

void test3_2()
{
	const int FOOT_TO_INCH = 12 ;
	const double INCH_TO_METER = 0.0254 ;
	const double BANG_TO_KG = 2.2 ;

	int a = 0, b = 0, c = 0;
	cout << "��Ӣ��Ӣ��Ϊ��λ������ߣ��԰�Ϊ��λ�������أ�ʹ��3������������Щ��Ϣ\n������ߣ�\n";
	cout << "Ӣ��";
	cin >> a;
	cout << "Ӣ��";
	cin >> b;
	cout << "����";
	cin >> c;
	int heightOfInch = a * FOOT_TO_INCH + b;
	double heightOfMeter = heightOfInch * INCH_TO_METER;
	double weightOfKg = c / BANG_TO_KG;
	double BMI = weightOfKg / (heightOfMeter * heightOfMeter);
	cout << "\nBMI:" << BMI;

}

void test3_3()
{
	int const EX = 60;
	double degrees = 0, minutes = 0, seconds = 0;
	cout << "degress:";
	cin >> degrees;
	cout << "minutes of arc:";
	cin >> minutes;
	cout << "seconds of arc:";
	cin >> seconds;
	double result = degrees + minutes / EX + seconds / 3600;
	cout << "result:" << result;

}

void test3_4()
{
	int const HOURS_OF_DAY = 24 ;
	int const MINUTES_OF_HOUR = 60;
	int const SECONDS_OF_MINUTE = 60;
	long seconds = 0;
	cout << "Enter tht number of seconds:";
	cin >> seconds;
	cout << seconds << "seconds = " << seconds / (24 * 60 * 60) << "days" << seconds % (24 * 60 * 60) / (60 * 60) << "hours" << seconds % (60 * 60) / 60 << "minutes" << seconds % 60 << "seconds";

}

void test3_5()
{
	long long populationOfWorld = 0;
	long long populationOfCountry = 0;
	cout << "Enter the world's population :";
	cin >> populationOfWorld;
	cout << "Enter other population:";
	cin >> populationOfCountry;
	double t = (double)populationOfCountry / populationOfWorld;
	cout << "population of the US is " << t * 100 << "% of the world";
}

void test3_6()
{
	double mileage = 0;
	double gasoline = 0;
	cout << "Enter the mileage:";
	cin >> mileage;
	cout << "Enter the gasoline:";
	cin >> gasoline;
	cout << "ÿ100�����������" << gasoline * 100 / mileage;
}

void test3_7()
{
	double input = 0;
	cout << "����ŷ�޷��������������ÿ100�������Ķ��������ͣ���";
	cin >> input;
	double result = 62.14 / (input / 3.875);
	cout << "�����" << result;
}