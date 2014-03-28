#include <iostream>
#include "Date_Time.h"
#include "HubList.h"
#include "FlightList.h"


using namespace std;

int main() {	
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
				getline(flightfile,flightNumber,','); 			
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
	
	flightList.Print();
	flightfile.close();
	
	
	} else {cout << "WARNING >> Can't open: Flight file"; }
	
	
	getchar();

	return 0;
}












