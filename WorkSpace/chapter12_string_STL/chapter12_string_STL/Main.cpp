// chapter12_string_STL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <random>
#include <algorithm>
#include <iterator>
#include <list>
#include <ctime>
#include <memory>

using namespace std;

//程序清单16.1 str1() 
void str1();

bool test16_1();
void test16_3();
void test16_4();
int reduce(long[], int);
template <class T>
int reduce2(T ar[], int n);
void test16_7();
void test16_8();
void test16_9();
void test16_10();
//编程练习16_10
struct Review
{
	string title;
	int rating;
};
bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);


int main()
{
    
	//test16_4();
	//test16_3();
	test16_1();

}

void str1()
{
	cout << "string类的构造函数：\n";
	string one("string one");
	cout << one;
	string two(20, '$');		//重复20此该字符
	string three(one);
	string four;
	four = two + three;
	
	char alls[] = "nothing coule be better!";
	string five(alls, 7);
	string six(alls + 6, alls + 10);	//从6开始 不包括10 g co
	string seven(&five[1], &five[4]);	//从1 开始 不包括4 oth
	string eight(four, 1, 23);		//从1开始截取长度为23的字符数组为字符串
	cout << one << "\n" << two << "\n" << three << "\n" << four << "\n" << five << "\n" << six << "\n" << seven << endl << eight;

	return;
}

bool test16_1()
{
	string str;
	cout << "输入一个字符串:\n";
	getline(cin, str);
	int len = str.size();
	int s = 0 ; 
	int e = len - 1 ;
	for (;s<=e;s++,e--)
	{
		if (str.at(s) != str.at(e))
		{
			cout << "false";
			return false;
		}
	}
	cout << "true";
	return true;

}

void test16_3()
{
	using namespace std;
	vector<string> strs;
	ifstream fin;
	fin.open("test16_3.txt");
	if (fin.is_open() == false)
	{
		cerr << "can't open the file";
		ofstream of;
		of.open("test16_2.txt");
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(fin, item, ':');
	while (fin)
	{
		strs.push_back(item);
		getline(fin, item, ':');
	}

	for (string str : strs)
	{
		cout << str << endl;
	}

}

void test16_4()
{
	int n = 20;
	long arr[20] = {12,14,15,11,65,85,48,75,75,84,85,89,65,12,41,45,21,30,20,30};
	cout << "元素个数：" << reduce2(arr, n);

}
int reduce(long ar[], int n)
{
	set<long> arr;
	for (int i = 0;i < n;i++)
	{
		arr.insert(ar[i]);
	}
	return arr.size();
}

template <class T>
int reduce2(T ar[], int n)
{
	set<T> arr;
	for (int i = 0;i < n;i++)
	{
		arr.insert(ar[i]);
	}

	return arr.size();
}

void test16_7()
{
	vector<int> arr;
	for (int i = 0;i < 51;i++)
	{
		arr.push_back(i + 1);
	}
	
	random_device rd;
	mt19937 g(rd());
	shuffle(arr.begin(), arr.end(), g);
	for (int i = 0;i < 6;i++)
	{
		cout << arr.at(i) << "  ";
	}
	return;
}

void test16_8()
{
	string m;
	string p;
	vector<string> ms;
	vector<string> ps;
	cout << "请输入你的朋友的姓名,按'q'结束：\n";
	getline(cin, m);
	while (m != "q")
	{
		ms.push_back(m);
		getline(cin, m);
	}
	cout << "请输入你的朋友的姓名,按'q'结束：\n";
	getline(cin, p);
	while (p != "q")
	{
		ps.push_back(p);
		getline(cin, p);
	}
	set<string> sum;
	for (int i = 0; i < ms.size();i++)
	{
		cout << ms.at(i) << "  ";
		sum.insert(ms.at(i));
	}
	cout << endl;
	for (int i = 0; i < ps.size();i++)
	{
		cout << ps.at(i) << "  ";
		sum.insert(ps.at(i));
	}
	cout << endl;
	for (string str : sum)
	{
		cout << str << "  ";
	}
}

void test16_9()
{
	int len = rand();
	vector<int> vi0;
	list<int> li;
	for (int i = 0;i < 30000;i ++ )
	{
		vi0.push_back(rand());
	}
	for (int i = 0;i < 30000;i++)
	{
		li.push_back(vi0.at(i));
	}
	vector<int> vi(vi0);

	clock_t start1 = clock();
	sort(vi.begin(), vi.end());
	clock_t end1 = clock();

	//for (int i : vi) cout << i << " ";

	cout << endl;

	clock_t start2 = clock();
	li.sort();
	clock_t end2 = clock();

	//for (int i : li) cout << i << " ";

	cout << endl;
	cout << "time1-vector:" << (double)(end1 - start1)/CLOCKS_PER_SEC << endl;
	cout << "time2-list:" << (double)(end2 - start2) / CLOCKS_PER_SEC << endl;
}

void test16_10()
{
	vector<shared_ptr<Review>> books ;
	Review temp;
	shared_ptr<Review> t(new Review);

	t->title = "";
	t->rating = 0;
	//while (FillReview(temp))
	books.push_back(t);
	books.size();
	cout << t->title << " " << t->rating;

}

bool op(const Review * r1,const Review * r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating<r2->rating)
	{
		return true;
	}
	return false;
}

bool operator<(const Review & r1, const Review & r2)
{
	if (r1.title < r2.title)
		return true;
	else if (r1.title == r2.title && r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool worseThan(const Review & r1, const Review & r2)
{
	if (r1.rating < r2.rating)
		return true;
	else
		return false;
}
bool FillReview(Review & rr)
{
	cout << "输入书名：q结束输入";
	getline(cin, rr.title);

	cout << "Enter the book rating:";
	cin >> rr.rating;
	return true;

}
void ShowReview(const Review & rr)
{
	cout << "title:" << rr.title << " rating:" << rr.rating;
}
