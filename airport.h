#pragma once
#include <iostream>
#include <vector>
#include "Plane.h"
using namespace std;

class airport
{
	vector <Plane*> planes;

public:
	void addPlane(Plane* plane) {
		planes.push_back(plane);
	}
	void printAllPlanes() {
		for (Plane* plane : planes) {
			cout << plane->getName() << endl;
			plane->flight();

		}
	}
};

