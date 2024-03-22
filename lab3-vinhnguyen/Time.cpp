#include "Time.h"

Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Time::set_hour(int hour) {
	this->hour = hour;
}

void Time::set_minute(int minute) {
	this->minute = minute;
}

void Time::set_second(int second) {
	this->second = second;
}

string Time::toString() {
	return to_string(hour) + ':' + to_string(minute) + ':' + to_string(second);
}
