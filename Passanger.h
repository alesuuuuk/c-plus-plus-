#pragma once
#include "Plane.h"
class Passanger : public Plane
{
private:

public:

	Passanger(string name) : Plane(name) {}

	void flight() override {
		cout << "Im terorist gimme all ur cookies AM NAM NAM ";
	}
};

