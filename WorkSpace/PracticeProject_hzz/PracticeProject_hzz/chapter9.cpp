#include "pch.h"
#include "golf.h"
#include <iostream>
#include <string>
/*

extern ʹ������.cpp�ļ��ж����ȫ�ֱ���ʱ����ʹ��extern��������
::���ڱ�����ǰ��ʾʹ�øñ�����ȫ����ʽ��
mutable ��ʹ�ṹ�����ࣩ����Ϊconst����ĳ��ʹ��mutable���εĳ�Ա����Ҳ���Ա��޸ģ�

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