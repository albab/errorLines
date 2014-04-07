#include <iostream>
#include "Date_Time.h"
#include "HubList.h"
#include "FlightList.h"
#include <windows.h>

using namespace std;

int main() {	
	char input;
		
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

//	hubList.Print(); //print entire hub list file input
	hubfile.close();
	} else {cout << "WARNING >> Can't open file: Hub List"; }

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
				getline(flightfile,flightCompany,'\n');
				flightList.Append(flightNumber,price,hubSource,hubDestination,departure,duration,flightCompany);
			}
		} 
		//Deemed too powerful, we'd get like a million points which may crash the grade database
		//ShellExecute(NULL, "open", "http://www.expedia.com/Flights", NULL, NULL, SW_SHOWNORMAL);
//	flightList.Print(); //print entire flight list input
	flightfile.close();


	} else {cout << "WARNING >> Can't open: Flight file"; }	
	
	int bags;
	char i, baggage,filter;
	do {
	cout << "\nWould you like to book a flight? (press y for yes or press q to quit)\n";
	cin>>i;
	char destination[100];
	char date [10];
	string company = "Delta";

	switch(i) {
	case 'y':
		cout<<"\nWhere would you like to fly? [Enter airport name exactly]\n\n";
		hubList.Print();
		cout<<"Destination: ";

		cin>>destination;		//user's input to where the want to fly to

		flightList.search(destination);

		cout<<"\nWould you like the cheapest flight or the shortest flight\n (press c for cheapest or press s for shortest)\n";
		filter='f';
		while(filter!='c'&&filter!='s')
		{
			cin>>filter;
						
			switch (filter)
			{
				case 'c':
					//calculate the cheapest flight
					break;
				case 's':
					//calculate the shortest flight
					break;

				default:
					cout<<"\nPlease enter c or s\n\n";
					break;
			
			}
		}
		cout<<"\nWould you like to check baggage?(press y for yes or press n for no)\n";
		baggage='b';
		while(baggage!='y'&&baggage!='n')
		{
			cin>>baggage;
						
			switch (baggage)
			{
				case 'y':
					cout<<"\nHow many bags do you want to check?\n";
					cin>>bags;
					///calculate baggage fee
					/*
					
					*/
					break;
				case 'n':
					bags=0;
					break;

				default:
					cout<<"\nPlease enter y or n\n\n";
					break;
			
			}
		}
		
		//cout<<"";			//this is where we print the ticket
		cout << "\nFlight#" << flightNumber << "\t   Company: " << flightCompany << "\t" << hubSource << "\t\t" << departure << "\n";			//this is where we print the ticket

		cout << "\t\t\t\t" << hubDestination << last << "\n\n";

		cout << "\t\t\t\t$" << price << " Base Price = " << price << "\n\n";
		break;
	
	case 'q':
		break;

	default:
		cout<<"\nPlease enter y or q\n\n";
		break;


	}
	}while (i!='q');

return 0;
}
