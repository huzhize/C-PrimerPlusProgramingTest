#pragma once
#include<iostream>
using namespace std;
#ifndef BANK_H_
#define BANK_H_
class Bank
{
private:
	string username;
	string accountNumber;
	double deposit;
public:
	Bank();
	Bank(string username,string accountNumber,double deposit);
	void updateDeposit(double deposit);
	double getDeposit();
	void show();
	~Bank();
};

#endif // BANK_H_
