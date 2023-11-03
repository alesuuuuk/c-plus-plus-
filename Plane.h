#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Plane
{
private:
	string name;
public:

	Plane(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	virtual void flight() {
		cout << "Base plane flight" << endl;
	}

};

