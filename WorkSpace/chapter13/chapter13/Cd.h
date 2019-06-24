#pragma once
/*
  date:2019/5/27
  ��12�� �����ϰ13_1

*/
class Cd
{
private:
	int len;
	char *performers;
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;	//��ʾ����CD������
	virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char production[50];
public:
	Classic(const char * s1,const char * s2,const char * p,int n, double x);
	Classic();
	virtual ~Classic();
	void virtual Report() const;
	virtual Classic & operator=(const Classic & d);
};
