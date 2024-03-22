#pragma once
#include "Time.h"

class DateTime : public Time
{
public:
	DateTime(); // default constructor

	DateTime(int month, int day, int year, int hour, int minute, int second); // constructor with int values

	DateTime(string); // constructor with a string

	//~DateTime(); // destructor

	int get_month() const; // returns month

	int get_day() const; // returns day

	int get_year() const; // returns year;

	void toString(); // overides output
private:
	int month;
	int day;
	int year;
	string dateTime;
};

