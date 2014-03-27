#include "FlightList.h"

//init List
FlightList::FlightList() {
	head = NULL;
}

void FlightList::Print() {

    	// Temp pointer
    	FlightNode *tmp = head;

    	// Empty list?
    	if ( tmp == NULL ) {
    		cout << "EMPTY" << endl;
    		return;
    	}

    	// Single node
    	if ( tmp->Next() == NULL ) {
    		cout << tmp->FlightNumber();
    		cout << " --> ";
    		cout << "NULL" << endl;
    	}
    	else {
    	// Traverse and print 
    		do {
        		cout << tmp->FlightNumber();
			cout << ", ";
			cout << tmp->FlightPrice();
			cout << ", ";
			cout << tmp->FlightSource();
			cout << ", ";
			cout << tmp->FlightDestination();
			cout << ", ";
			cout << tmp->FlightDeparture();
			cout << ", ";
			cout << tmp->FlightDuration();
			cout << ", ";
			cout << tmp->FlightCompany();
        		cout << " --> ";
        		tmp = tmp->Next();
    		} while ( tmp != NULL );

    		cout << "NULL" << endl;
    }
}
/**
 * Append a flight to the list
 */
void FlightList::Append(string aFlightNumber, double aPrice, string aSource,string aDestination, string aDeparture, int aDuration, string aFlightCompany) {

	
	string departureString = aDeparture;
	string departureSplitString;
	string minutes,hours,day,month,year;
	int i=1;
	int minutesInt,hoursInt,dayInt,monthInt,yearInt;
	stringstream stream(departureString);
	while(getline(stream,minutes,'/')) {
		getline(stream,hours,'/');
		getline(stream,day,'/');
		getline(stream,month,'/');
		getline(stream,year,'/');
		i++;	
	}
	minutesInt = atoi(minutes.c_str());
	hoursInt = atoi(hours.c_str());
	dayInt = atoi(day.c_str());
	monthInt = atoi(month.c_str());
	yearInt = atoi(year.c_str());
	Date_Time *date = new Date_Time(minutesInt,hoursInt,dayInt,monthInt,yearInt);
	date->returnDate();
	
	//Lets make a new flight
    	FlightNode* newFlight = new FlightNode();

    	newFlight->SetVar(aFlightNumber,aPrice,aSource,aDestination,date,aDuration,aFlightCompany);
    	newFlight->SetNext(NULL);

    	//Temporary flight pointer
    	FlightNode *tmp = head;

    	if ( tmp != NULL ) {
    		// Find tail
    		while ( tmp->Next() != NULL ) {
        		tmp = tmp->Next();
    		}

    		// Point last flight to the new flight
    		tmp->SetNext(newFlight);
    	}
    	else {
    		// First node in the list
    		head = newFlight;
    	}
}