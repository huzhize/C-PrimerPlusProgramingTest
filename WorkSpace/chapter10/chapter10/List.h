#pragma once
class List
{
private:
	List *next;
	char *name;
	int age;
	
public:
	List();
	~List();
	bool isEmpty();
	bool isFull();
	void visit(void (*pf)(List &))
};

