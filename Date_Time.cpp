#include "Date_Time.h"

Date_Time::Date_Time(int min, int hr, int d, int mon, int y) {
	minutes = min;
	hours = hr;
	day = d;
	month = mon;
	year = y;
	time = to_string(minutes) + ":" + to_string(hours) + ":" + to_string(day) + ":" + to_string(month) + ":" + to_string(year);
}


void Date_Time::AddMinutes(int min) {
	minutes = minutes + min;
}


void Date_Time::returnDate() {
	cout << minutes;
	cout << ":";
	cout << hours;
	cout << ":";
	cout << day;
	cout << ":";
	cout << month;
	cout << ":";
	cout << year;
	cout << "\n";
}



string Date_Time::ToString() {
	return time;
}

