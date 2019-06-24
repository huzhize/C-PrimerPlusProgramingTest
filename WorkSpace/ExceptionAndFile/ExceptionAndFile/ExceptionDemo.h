#pragma once
/*
   2019.5.30
   异常知识总结
   1.abort()
   2.返回错误码：例如ostream类的get(void)成员返回下一个字符的ASCII码，到达文件末尾返回EOF
   3.异常机制 异常类,子类可重新定义what函数
   logic_error的子类：domain_error invalid_argument length_error out_of_bounds
   runtime_error的子类 range_error overflow_error underflow_error
   若以上异常无法满足实际需求，可以从logic_error或runtime_error派生一个异常类
   bad_alloc异常和new
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
			std::abort();	//程序执行到此处会停止 相当于exit()
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

