#ifndef FLIGHTLIST_H
#define FLIGHTLIST_H

#include <string>
#include <iostream>
#include <fstream>
#include "FlightNode.h"

class FlightNode;

using namespace std;

//FlightList class
class FlightList {
private:
	FlightNode* head;
public:
	FlightList();
	void Print();
    	void Append(string aFlightNumber, double aPrice,  string aSource,string aDestination, string aDeparture, int aDuration, string aFlightCompany);
};


#endif