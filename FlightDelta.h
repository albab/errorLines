#ifndef FLIGHTDELTA_H
#define FLIGHTDELTA_H

#include <string>
#include <iostream>

using namespace std;

#include "FlightNode.h"

class FlightDelta : virtual public FlightNode {
private:
	float deltaBaggageFees;
	int delay;
public: 
	float getBaggageFees();
	int getDelay();
};


#endif
