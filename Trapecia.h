#pragma once
#include "BaseClass.h"
class Trapecia :public BaseClass
{
private:
	int a;
	int b;
	int h;
public:
	Trapecia(int a, int b, int h){
		this->a = a;
		this->b = b;
		this->h = h;
	}
	int calcSquare() override {
		int sum = a + b;
		return sum * h / 2;
	}
};

