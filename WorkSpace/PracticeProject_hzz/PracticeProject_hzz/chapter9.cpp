#include "pch.h"
#include "golf.h"
#include <iostream>
#include <string>
/*

extern 使用其他.cpp文件中定义的全局变量时必须使用extern声明它；
::放在变量名前表示使用该变量的全局形式；
mutable 即使结构（或类）变量为const，其某个使用mutable修饰的成员变量也可以被修改；

*/
void test9_1()
{
	golf ann;
	setgolf(ann, "huzz", 1);
	if (setgolf(ann) == 1)
	{
		showgolf(ann);
	}
}

const int ArSize = 10;

void strcount(const char * str);

void test9_2()
{


}