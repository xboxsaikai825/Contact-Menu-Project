#pragma once
#include <iostream>
#include <string>

using namespace std;

class Time
{
public:
	Time(); // default constructor

	Time(int hour, int minute, int second); // constructor

	void set_hour(int); // sets hour

	void set_minute(int); // sets minute

	void set_second(int); // sets second

	//~Time(); // destructor

	string toString(); // output
private:
	int hour;
	int minute;
	int second;
};

