#include "FlightNode.h"

using namespace std;

FlightNode::FlightNode() {
	next = NULL;
}

FlightNode::FlightNode(string aFlightNumber, double aPrice,  string aSource, string aDestination, string aDeparture, int aDuration, string aFlightCompany, FlightNode* aNext) {
	flightNumber = aFlightNumber;
	flightCompany = aFlightCompany;
	departure = aDeparture;
	price = aPrice;
	duration = aDuration;
	destination = aDestination;
	source = aSource;
	next = aNext;
}

void FlightNode::SetVar(string aFlightNumber, double aPrice,  string aSource, string aDestination, string aDeparture, int aDuration, string aFlightCompany) {
	flightNumber = aFlightNumber;
	flightCompany = aFlightCompany;
	price = aPrice;
	departure = aDeparture;
	duration = aDuration;
	destination = aDestination;
	source = aSource;
}

void FlightNode::SetNext(FlightNode* aNext) { 
	next = aNext; 
}


string FlightNode::FlightNumber() { 
	return flightNumber; 
}

int FlightNode::FlightDuration() { 
	return duration; 
}

string FlightNode::FlightCompany() {
	return flightCompany;
}

double FlightNode::FlightPrice() {
	return price;
}

string FlightNode::FlightDestination() {
	return destination;
}

string FlightNode::FlightSource() {
	return source;
}

string FlightNode::FlightDeparture() {
	return departure;
}


FlightNode* FlightNode::Next() { 
	return next;
}












 






