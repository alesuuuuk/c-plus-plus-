#pragma once
#include "BaseClass.h"
class Circle :public BaseClass
{
private:
	int radious;
public:
	Circle(int radious) {
		this->radious = radious;
	}
	int calcSquare() override {
		int squareR = radious * radious;
		return 3.14 * squareR;
	}
};

