#include "pch.h"
#include "Tv.h"
/*
	此处需注意类内用到其它类以及函数时，声明和定义的区别以及先后顺序
*/

void Tv::setMode(Remote & r, int m)
{
	r.mode = m;
}
