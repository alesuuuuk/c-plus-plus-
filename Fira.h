#pragma once
#include "Vehicle.h"
class Fira :public Vehicle
{
private:
	int passenger;
	int kilometres;
public:
	Fira(int passenger, int kilometres) {
		this->kilometres = kilometres;
		this->passenger = passenger;
	}
	double timeOfRoad() override {
		return this->kilometres / 20;
	}
	double priceOfRoad() {
		return this->passenger* (this->kilometres * 60);
	}
};

