#include "pch.h"
#include <iostream>
#include "chapter9.h"
void test9_3()
{
	using namespace std;
	chaff * arr = new chaff[2];
	strcpy(arr[0].dross, "one");
	arr[0].slag = 11;
	strcpy(arr[1].dross, "two");
	arr[1].slag = 2;

	for (int i=0;i<2;i++)
	{
		cout << "#" << i + 1 << "\ndross:" << arr[i].dross << "  slag:" << arr[i].slag << endl;
	}


}