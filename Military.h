#pragma once
#include "Plane.h"
class Military : public Plane
{
private:

public:
	Military(string name) : Plane(name) {}

	void flight() override {
		cout << "BIM BIM BAM BAM" << endl;
	}
};