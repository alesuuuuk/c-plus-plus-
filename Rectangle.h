#pragma once
#include "BaseClass.h"
class Rectangle :public BaseClass
{
private:
	int width;
	int length;
public:
	Rectangle(int width, int length) {
		this->width = width;
		this->length = length;
	}
	int calcSquare() override {
		return width * length;
	}
};

