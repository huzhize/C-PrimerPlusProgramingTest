#pragma once

/*
	date:2019/5/24
	��12�� �����ϰ12_1
*/

class Cow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow &);	//���ƹ��캯��
	~Cow();
	Cow & operator=(const Cow & c);
	void showCow() const;
};

