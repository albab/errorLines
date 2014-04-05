#include "FlightSouthWest.h"

#define baseCost 25;

float FlightSouthWest::getBaggageFees(int bags)
{
	southWestBaggageFees = bags * baseCost;
	return southWestBaggageFees;
}

int FlightSouthWest::getDelay() {
	return delay;
}


