#include <iostream>
#include "Date_Time.h"
#include "HubList.h"
#include "FlightList.h"


using namespace std;

int main() {	
	
	
	char input;
	do {
		cout << "Would you like to book a flight? (press y for yes or press q to quit):\n";
		cin >> input;
		char destination[50];
		char date[10];
	
		switch(input) {
			case 'y':
				cout << "Where would you like to fly?\n";
				cin >> destination;
				cout << "What date would you like your flight? (DD/MM/2014)\n";
				cin >> date;
	
				cout << "Which flight would you like?\n";
				
				//cout flight info here
				
				cout << "Would you like to check baggage?\n\n";
	
				break;
		
			case 'q':
				break;
		
		}
	} while (input != 'q');
	
	
	HubList hubList;
	
	string line,name,location;
	ifstream hubfile ("Hub.csv");
	if (hubfile.is_open()) {
		while ( getline (hubfile,line) ) { // Skip first line
			while(getline(hubfile,name,',')) { 				
				getline(hubfile,location,',');
				hubList.Append(name,location);
			}
		} 
	
	hubList.Print();
	hubfile.close();
	} else {cout << "WARNING >> Can't open file: Hub List"; }
	getchar();

	FlightList flightList;	

	string line2,flightNumber,flightCompany,departure,last;
	string priceString;
	double price;
	int duration;
	string durationString;
	string hubSource;
	string hubDestination;
	
	ifstream flightfile ("Flight.csv");
	if (flightfile.is_open()) {
		while (getline(flightfile,line2))  { // Skip first line
			while(getline(flightfile,flightNumber,',')) {
				getline(flightfile,priceString,',');
				price = atof(priceString.c_str());
				getline(flightfile,hubSource,',');
				getline(flightfile,hubDestination,',');
				getline(flightfile,departure,',');
				getline(flightfile,durationString,',');
				duration = atoi(durationString.c_str());
				getline(flightfile,flightCompany,',');
				flightList.Append(flightNumber,price,hubSource,hubDestination,departure,duration,flightCompany);
			}
		} 
	
	flightList.Print();
	flightfile.close();
	
	
	} else {cout << "WARNING >> Can't open: Flight file"; }

	return 0;
}












