#ifndef FLIGHTNODE_H
#define FLIGHTNODE_H

#include <string>
#include <iostream>
#include <fstream>
#include "HubNode.h"
#include "Date_Time.h"

using namespace std;

class HubNode;

//FlightNode Class
class FlightNode {
	string flightNumber;
	string flightCompany;
	Date_Time* departure;
	double price;
	int duration;
	HubNode *destination;
	HubNode *source;
//	string source;
//	string destination;
    	FlightNode* next;
	float baggageFees;
	int delay;

public:
	FlightNode();
	FlightNode(string flightNumber, double price,  HubNode* source, HubNode* destination, Date_Time* departure, int duration, string flightCompany, FlightNode* next);
    	void SetVar(string flightNumber, double price,  HubNode* source, HubNode* destination, Date_Time* departure, int duration, string flightCompany);
    	void SetNext(FlightNode* aNext);
    	string FlightNumber();
	double FlightPrice();
	string FlightDeparture();
	int FlightDuration();
	string FlightSource();
	string FlightDestination();
	string FlightCompany();
    	FlightNode* Next();
	virtual float getBaggageFees();
	virtual int getDelay();
};

#endif