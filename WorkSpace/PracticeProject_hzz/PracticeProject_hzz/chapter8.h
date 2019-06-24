#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
void test8_1();
void printStr8_1(string str, int & t);
void test8_2();
struct CandyBar8_2;
void setCandyBa8_2(CandyBar8_2 &cb, char * brand, double weight, int ka);
void printCandyBar(const CandyBar8_2 & cb);
void test8_3();
void strToUpper(string & str);
struct StringTest
{
	char * str;
	int ct;
};
void set8_4(StringTest &beany, char * testing);
void show(string &str, int i = 1);
void show(StringTest &beany, int i = 1);
void test8_4();
template<typename T>
T max5(T arr[]);
void test8_5();
template<typename T>
T maxn(T arr[], int i);
template<> char* maxn(char * arr[], int n);
void test8_6();
template <typename T>
void showArray(T arr[], int n);

template <typename T>
void showArray(T * arr[], int n);
struct debts;
void test8_7();