#include "FlightDelta.h"
#define baseCost 0;

float FlightDelta::getBaggageFees(int bags) {
	deltaBaggageFees = bags * baseCost;
	return deltaBaggageFees;
}

int FlightDelta::getDelay() {
	return delay;
}


