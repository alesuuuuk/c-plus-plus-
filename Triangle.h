#pragma once
#include "BaseClass.h"
class Triangle :public BaseClass
{
private:
	int katetOne;
	int katetTwo;
public:
	Triangle(int katetOne, int katetTwo) {
		this->katetOne = katetOne;
		this->katetTwo = katetTwo;
	}

	int calcSquare() override {
		return katetOne * katetTwo / 2;
	}
};

