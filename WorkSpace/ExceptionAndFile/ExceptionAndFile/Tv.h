#pragma once
#ifndef TV_H_
#define TV_H_
#include <iostream>
#include <string>
using namespace std;
class Remote;
class Tv
{
public:
	friend class Remote;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };
	Tv(int s = Off, int mc = 125) :state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup() 
	{ 
		if (volume < MaxVal){volume++;return true;}
	    else return false;
	}
	bool voldown() 
	{ 
		if (volume > MinVal) { volume--; return true; }
		else return false;
	}

	void chanup() 
	{ 
		if (channel < maxchannel) channel++;
		else channel = 1;
	 }
	void chandown() 
	{
		if (channel > 1) channel--;
		else channel = maxchannel;
	}
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const 
	{
		using namespace std;
		cout << "TV is" << (state == Off ? "Off" : "On") << endl;
		if (state == On)
		{
			cout << "Volume setting = " << volume << endl;
			cout << "Channel setting = " << channel << endl;
			cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
			cout << "input = " << (input == TV ? "TV" : "DVD") << endl;
		}
	}
	void setMode(Remote & r, int m);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};
class Remote
{
private:
	int mode;
public:
	friend class Tv;
	Remote(int m = Tv::TV) :mode(m) {}
	bool volup(Tv & t) { return t.volup(); }
	bool voldown(Tv & t) { return t.voldown(); }
	void onoff(Tv & t) { t.onoff(); }
	void chanup(Tv & t) { t.chanup(); }
	void chandown(Tv & t) { t.chandown(); }
	void set_chan(Tv & t, int c) { t.channel = c; }
	void set_mode(Tv & t) { t.set_mode(); }
	void set_input(Tv & t) { t.set_input(); }
	void showMode() { cout << "mode: " << mode << endl; }
};



#endif // !TV_H_



