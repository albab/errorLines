#include "Date_Time.h"

Date_Time::Date_Time(int min, int hr, int d, int mon, int y) {
	minutes = min;
	hours = hr;
	day = d;
	month = mon;
	year = y;
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


