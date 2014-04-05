#ifndef FLIGHTUSAIRWAY_H
#define FLIGHTUSAIRWAY_H

#include <string>
#include <iostream>

using namespace std;

#include "FlightNode.h"

class FlightUSAirway : virtual public FlightNode {
private:
	float usAirwayBaggageFees;
	int delay;
public: 
	float getBaggageFees(int);
	int getDelay();
};


#endif
