#include "FlightUSAirway.h"

#define baseCost 25;

float FlightUSAirway::getBaggageFees(int bags) {
	if (bags <= 1)
		usAirwayBaggageFees = 0;
	else
		usAirwayBaggageFees = (bags - 1) * baseCost;
	return usAirwayBaggageFees;
}

int FlightUSAirway::getDelay() {
	return delay;
}


