#pragma once
class Plorg
{
	static const int MAX = 20;
private:
	char name[MAX];
	int CI;
public:
	Plorg(int c, const char * n = "Plorga");
	~Plorg();
	void reset(int CI);
	void show();
};

