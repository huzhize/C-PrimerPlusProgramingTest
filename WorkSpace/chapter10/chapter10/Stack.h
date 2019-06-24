#pragma once
//10_5
struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
private:
	enum { MAX = 10 };
	customer cs[MAX];
	int top;
	double sumPayment;
public:
	Stack();
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const customer & c);
	bool pop(customer & c);
};

