#include <string>
#include <iostream>

using namespace std;

class Date_Time {
	int minutes;
	int hours;
	int day;
	int month;
	int year;
public: 
	Date_Time(int min, int hr, int d, int mon, int y) { minutes = min; hours = hr; day = d; month = mon; year = y;};
	void AddMinutes(int min) { minutes = minutes + min; };
	void returnDate() { cout << minutes; cout << ":"; cout << hours; cout << ":"; cout <<  day; cout << ":"; cout << month; cout <<  ":"; cout <<  year; cout << "\n";};
	string ToString();
};


int main() {
	Date_Time *date = new Date_Time(1,1,1,1,1);
	date->returnDate();
	return 0;
}



