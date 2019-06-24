#include "pch.h"
#include <cstring>
#include "StringBad.h"

int StringBad::num_strings = 0;

StringBad::StringBad(const char * s)
{
	using namespace std;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	std::cout << num_strings << ":" << str << endl;
}
StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	std::cout << num_strings << ":" << str << "Default object created\n";
}

StringBad::~StringBad()
{
	using namespace std;
	cout << "object delete";
	num_strings--;
	cout << num_strings << endl;
	delete[] str;
}
std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	using namespace std;
	os << st.str << endl ;
	return os;
}
