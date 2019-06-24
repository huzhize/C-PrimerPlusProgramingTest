#include "pch.h"
#include <iostream>
#include <cctype>
#include <array>
#include <string>
#include <fstream>
using namespace std;

/*



*/

void test6_1()
{
	char ch;
	while (cin>>ch)
	{
		if (ch == '@')
		{
			break;
		}
		if (isalpha(ch))
		{
			if (ch < 'a') {
				ch += 32;
			}
			else
			{
				ch -= 32;
			}
			cout << ch;
		}
	}
}

void test6_2()
{
	double donation = 0, sum = 0, average = 0;
	int i = 0, count = 0 ;
	array<double, 10> arr;
	while (cin >> donation)
	{
		arr[i] = donation;
		i++;
		if (i == 10)
		{
			break;
		}
		sum += donation;
	}
	
	average = sum / i;
	cout << "average:"<< average<<endl;
	for (int j = 0;j < i;j++)
	{
		if (arr[j] > average)
		{
			count++;
			cout << arr[j]<< endl;
		}
	}
	cout << "" << count;
}

//menu
void test6_3()
{
	char ch;
	cout << "a.apple\tb.banana\nc.cat\td.dog" << endl;
	cout << "please enter a b c d:";
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':cout << "this is an apple" << endl;
			break;
		case 'b':cout << "this is a banana\n";
			break;
		case 'c':cout << "this is a cat\n";
			break;
		case 'd':cout << "this is a dog\n";
			break;
		default:cout << "please enter a b c d:";
		}
	}
}

struct bop
{
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;
};
void test6_4()
{
	struct bop people[4];
	people[0] = { "Wimp Macho0","younger0","theOne0",0 };
	people[1] = { "Wimp Macho1","younger1","theOne1",1 };
	people[2] = { "Wimp Macho2","younger2","theOne2",2 };
	cout << "a.display by name\tb.display by title\ncdisplay by bopname\td.display by perference:";
	char ch;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0;i < 3;i++)
			{
				cout << people[i].fullname << endl;
			}
			break;

		case 'b':
			for (int i = 0;i < 3;i++)
			{
				cout << people[i].title << endl;
			}
			break;

		case 'c':
			for (int i = 0;i < 3;i++)
			{
				cout << people[i].bopname<< endl;
			}
			break;

		case 'd':
			for (int i = 0;i < 3;i++)
			{
				int p = people[i].preference;
				switch (p)
				{
				case 0:
					cout << people[i].fullname<<endl;
					break;
				case 1:
					cout << people[i].title<<endl;
					break;
				case 2:
					cout << people[i].bopname<<endl;
					break;
				}
			}
			break;
		default:
			cout << "enter a b c d:";

		}
	}
}

void test6_5()
{
	double input = 0, result = 0;
	while (cin >> input)
	{
		if (input < 5001)
		{
			result = 0;
		}
		else if (input < 15000)
		{
			result = (input - 5000) * 0.1;
		}
		else if (input < 35000)
		{
			result = 1000 * 0.1 + (input - 15000) * 0.15;
		}
		else
		{
			result = 10000 * 0.1 + 20000 * 0.15 + (input - 35000) * 0.2;
		}
		cout << result<<endl;
	}
}

struct info
{
	string name;
	double capital;
};

void printInfo(struct info t)
{
	cout << "name:" << t.name << " capital:" << t.capital << endl;
}
void test6_6()
{
	int size = 0;
	cout << "捐献者数目：";
	cin >> size;

	
		cin.sync();
		cin.clear();
		cin >> size;
	


	
	int count = 0;
	struct info *arr = new info[size];
	for (int i = 0;i < size;i++)
	{
		cout << "第" << i + 1 << "个人\n";
		cout << "enter nane:";
		cin>>arr[i].name;
		cout << "\nenter capital:";
		cin >> arr[i].capital;
	}
	for (int i = 0;i < size;i ++ )
	{
		if (arr[i].capital > 10000) {
			count++;
			cout << "Grand Patrons" << endl;
			printInfo(arr[i]);

		}
	}
	if (count == size)
	{
		cout << "Patrons\nnone";

	}
	else if (count == 0)
	{
		cout << "Grand Patrons\nnone";

	}
	for (int i = 0;i < size;i++)
	{
		if (arr[i].capital <= 10000) {
			cout << "Patrons" << endl;
			printInfo(arr[i]);
		}
	}

}

void test6_7()
{
	int category1 = 0, category2 = 0, category3 = 0;
	string word;
	while (cin >> word)
	{
		char ch = word.at(0);
		
		if (word == "q")
		{
			break;
		}
		else if (isalpha(ch))
		{
			switch (ch)
			{
			case 'a':
				category1++;
				break;
			case 'e':
				category1++;
				break;
			case 'i':
				category1++;
				break;
			case 'o':
				category1++;
				break;
			case 'u':
				category1++;
				break;
			default:
				category2++;
				break;
			}
		}
		else
		{
			category3++;
		}
	}
	std::cout << category1 << " " << category2 << " " << category3;
}

//打开一个文件并统计该文件包含的字符数量
void test6_8()
{
	ifstream inFile;
	inFile.open("huzz.txt");
	char ch = 0;
	int count = 0;
	while (inFile.good())
	{
		inFile >> ch;
		cout << ch;
		count++;
	}
	cout << "\n字符数量：" << count;

	inFile.close();
}

//从文件中按行读取字符串、读取double
void test6_9()
{
	string fileName = "test.txt";
	ifstream inFile;
	inFile.open("test.txt");
	int num = 0;
	inFile >> num;
	cout << num<<endl;
	while (inFile.good())
	{
		inFile.get();
		string name;
		double money = 0;
		getline(inFile, name);	//此处与 cin 的用法类似
		inFile >> money;
		cout << "name:" << name << "\tmoney:" << money<<endl;
	}
}