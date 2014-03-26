#ifndef FLIGHTNODE_H
#define FLIGHTNODE_H

#include <string>
#include <iostream>
#include <fstream>
//#include "HubNode.h"

using namespace std;

//class HubNode;

//FlightNode Class
class FlightNode {
	string flightNumber;
	string flightCompany;
	string departure;
	double price;
	int duration;
//	HubNode *destination;
//	HubNode *source;
	string source;
	string destination;
    	FlightNode* next;

public:
	FlightNode();
	FlightNode(string flightNumber, double price,  string source, string destination, string departure, int duration, string flightCompany, FlightNode* next);
    	void SetVar(string flightNumber, double price,  string source, string destination, string departure, int duration, string flightCompany);
    	void SetNext(FlightNode* aNext);
    	string FlightNumber();
	double FlightPrice();
	string FlightSource();
	string FlightDestination();
	string FlightDeparture();
	int FlightDuration();
	string FlightCompany();
    	FlightNode* Next();
};

#endif