#include "DateTime.h"

DateTime::DateTime()
	: Time() {
	month = 0;
	day = 0;
	year = 0;
	dateTime = month + '/' + day + '/' + year;
}

DateTime::DateTime(string date_time)
	: Time() {
	dateTime = date_time;
	month = 0;
	day = 0;
	year = 0;
}

DateTime::DateTime(int year, int day, int month, int hour, int minute, int second)
	: Time(hour, minute, second) {
	this->year = year;
	this->day = day;
	this->month = month;
}

int DateTime::get_year() const {
	return year;
}

int DateTime::get_month() const {
	return month;
}

int DateTime::get_day() const {
	return day;
}

void DateTime::toString() {
	string full_date_time = to_string(month) + '/' + to_string(day) + '/' + to_string(year) + ' ' + Time::toString();
	cout << full_date_time << endl;
}


