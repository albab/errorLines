#ifndef FLIGHTSOUTHWEST_H
#define FLIGHTSOUTHWEST_H

#include <string>
#include <iostream>

using namespace std;

#include "FlightNode.h"

class FlightSouthWest : virtual public FlightNode{
private:
	float southWestBaggageFees;
	int delay;
public: 
	float getBaggageFees();
	int getDelay();
};


#endif
