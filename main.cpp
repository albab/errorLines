#include <iostream>
#include "Date_Time.h"
#include "HubList.h"
#include "FlightList.h"


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

//	flightList.Print(); //print entire flight list input
	flightfile.close();


	} else {cout << "WARNING >> Can't open: Flight file"; }	
	
	int bags;
	char i, baggage,filter;
	do {
	cout << "\nWould you like to book a flight? (press y for yes or press q to quit)\n";
	cin>>i;
	char destination [50];
	char date [10];

	switch(i) {
	case 'y':
		cout<<"\nWhere would you like to fly? [Enter a number]\n\n";
		cout<<"1: Albany [Albany International Airport]\n";
		cout<<"2: Boston [General Edward Lawrence Logan International Airport]\n";
		cout<<"3: Chicago [Midway International Airport]\n";
		cout<<"4: Chicago [O'Hare International Airport]\n";
		cout<<"5: Denver [Denver International Airport]\n";
		cout<<"6: Honolulu [Honolulu International Airport]\n";
		cout<<"7: Las Vegas [Mc Carran International Airport]\n";
		cout<<"8: Los Angeles [Los Angeles International Airport]\n";
		cout<<"9: Los Angeles [Whiteman Airport]\n";
		cout<<"10: Miami [Miami International Airport]\n";
		cout<<"11: New York [John F Kennedy International Airport]\n";
		cout<<"12: Phoenix [Phoenix Sky Harbor International Airport]\n";
		cout<<"13: San Diego [San Diego International Airport]\n";
		cout<<"14: San Francisco [San Francisco International Airport]\n";
		cout<<"15: Tucson [Tucson International Airport]\n\n";
		cout<<"#";
		cin>>destination;		//user's input to where the want to fly to

		cout<<"\nWould you like the cheapest flight or the shortest flight\n (press c for cheapest or press s for shortest)\n";
		filter='f';
		while(filter!='c'&&filter!='s')
		{
			cin>>filter;
						
			switch (filter)
			{
				case 'c':
					///calculate the cheapest flight
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












