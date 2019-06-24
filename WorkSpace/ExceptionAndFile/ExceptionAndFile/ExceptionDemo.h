#pragma once
/*
   2019.5.30
   �쳣֪ʶ�ܽ�
   1.abort()
   2.���ش����룺����ostream���get(void)��Ա������һ���ַ���ASCII�룬�����ļ�ĩβ����EOF
   3.�쳣���� �쳣��,��������¶���what����
   logic_error�����ࣺdomain_error invalid_argument length_error out_of_bounds
   runtime_error������ range_error overflow_error underflow_error
   �������쳣�޷�����ʵ�����󣬿��Դ�logic_error��runtime_error����һ���쳣��
   bad_alloc�쳣��new
*/
#include <stdexcpt.h>
#include <iostream>

class ExceptionDemo : public std::exception
{
private:
	int a;
	int b;
public:
	const char * what()
	{
		return "bad argument to hmean()";
	}
	explicit ExceptionDemo();
	
	~ExceptionDemo();
	bool testAbort()
	{
		if (a == -b)
			std::abort();	//����ִ�е��˴���ֹͣ �൱��exit()
		return true;
	}

};

class ExceptionDemo2 : public std::logic_error
{
private:
	int a = 1;
	int b = 1;
public:
	const char* what()
	{
		std::cout << "a:" << a << "  b:" << b << "\n";
		return "no";
	}
	explicit ExceptionDemo2(int e);
	ExceptionDemo2();
	
	void foo();
};

