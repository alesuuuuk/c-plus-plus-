#pragma once
#include "Plane.h"
class Vantage : public Plane
{
private:

public:

	Vantage(string name) : Plane(name) {}

	void flight() override {
		cout << "Vantage plane is flying";
	}
};
