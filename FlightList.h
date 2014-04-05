#ifndef FLIGHTLIST_H
#define FLIGHTLIST_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "FlightNode.h"
#include "HubNode.h"
#include "Date_Time.h"

class FlightNode;
class HubNode;

using namespace std;

//FlightList class
class FlightList {
private:
	FlightNode* head;
public:
	FlightList();
	void Print();
	void PrintDestinations();
    	void Append(string aFlightNumber, double aPrice, string aSource, string aDestination, string aDeparture, int aDuration, string aFlightCompany);
};


#endif