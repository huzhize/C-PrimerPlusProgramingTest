#include "pch.h"
#include "Bank.h"
#include<iostream>
#include<string>
//using namespace std;
Bank::Bank() 
{
	this->username = "null";
	this->accountNumber = "0000";
	this->deposit = 0;
}
Bank::Bank(string username, std::string accountNumber, double deposit)
{
	this->username = username;
	this->accountNumber = accountNumber;
	this->deposit = deposit;

}

Bank::~Bank()
{
	std::cout << "end";
}

void Bank::updateDeposit(double deposit)
{
	this->deposit = deposit;
}

double Bank::getDeposit()
{
	return this->deposit;
}

void Bank::show()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "username:" << username << "\taccount number:" << accountNumber << "\tdeposit:" << deposit;
}
