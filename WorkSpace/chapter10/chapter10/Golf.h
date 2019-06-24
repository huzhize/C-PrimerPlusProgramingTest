#pragma once
class Golf
{
	static const int Len = 40;
private:
	char fullname[Len];
	int handicap;
public:
	Golf();
	~Golf();
	void showGolf() const;
	void setGolf(const char * fn, int hc);
};

