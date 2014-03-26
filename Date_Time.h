#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <string>
#include <iostream>

using namespace std;

class Date_Time {
private:
	int minutes;
	int hours;
	int day;
	int month;
	int year;
public: 
	Date_Time(int min, int hr, int d, int mon, int y);
	void AddMinutes(int min);
	void returnDate();
	string ToString();
};


#endif
