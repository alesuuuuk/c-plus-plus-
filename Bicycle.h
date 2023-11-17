#pragma once
#include "Vehicle.h"
class Bicycle :public Vehicle
{
private:
	int passenger;
	int kilometres;
public:
	Bicycle(int kilometres) {
		this->kilometres = kilometres;
		this->passenger = 1;
	}
	double timeOfRoad()override {
		return this->kilometres / 15;
	}
	double priceOfRoad() {
		return this->kilometres * 5;
	}
};

