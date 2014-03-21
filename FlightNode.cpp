#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//FlightNode Class
class FlightNode {
    	string flightNumber;
	string flightCompany;
	//double price;
	//int duration;
	//placeholders for HubNode* source/destination for testing
	string destination;
	string source;
	//HubNode* source;
	//HubNode* destination;
    	FlightNode* next;


public:
	FlightNode() {};
    	void SetVar(string flightNumber, string flightCompany, string destination, string source);
    	void SetNext(FlightNode* aNext) { next = aNext; };
    	string FlightNumber() { return flightNumber; };
    	FlightNode* Next() { return next; };
	
};



// List class
class List {
	FlightNode *head;
public:
	List() { head = NULL; };
	void Print();
    	void Append(string flightNumber, string flightCompany, string destination, string source);
};

/**
 * Print flights in the list
 */
void List::Print() {

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

        		cout << " --> ";
        		tmp = tmp->Next();
    		} while ( tmp != NULL );

    		cout << "NULL" << endl;
    }
}
/**
 * Append a flight to the list
 */
void List::Append(string flightNumber, string flightCompany, string destination, string source) {

	//Lets make a new flight
    	FlightNode* newFlight = new FlightNode();
    	newFlight->SetVar(flightNumber,flightCompany,destination,source);
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


int main() {
	List flightList;
	
	string line,flightNumber,flightCompany,destination,source;
	int number,i=0;
	ifstream myfile ("Flight.csv");
	if (myfile.is_open()) {
		while ( getline (myfile,line) ) { // Skip first line
			while(getline(myfile,flightNumber,',')) { 				
				getline(myfile,flightCompany,',');
				getline(myfile,destination,',');
				getline(myfile,source,',');
				flightList.Append(flightNumber,flightCompany,destination,source);
			}
		} 
	
	flightList.Print();
	myfile.close();
	} else {cout << "WARNING: Can't open file."; }
	getchar();

	return 0;
}









 






