#pragma once
#include "Vehicle.h"
class Car :public Vehicle
{
private:
	int passenger;
	int kilometres;
public:
	
	Car(int passenger, int kilometres) {
		this->passenger = passenger;
		this->kilometres = passenger;
	}
	double timeOfRoad()override {
		return this->kilometres / 100;
	}
	double priceOfRoad() override {
		return this->passenger * (this->kilometres * 4.47);
	}
};

