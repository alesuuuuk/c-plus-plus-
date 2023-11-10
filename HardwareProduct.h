#pragma once
#include "ProductDevelopment.h"
class HardwareProduct : public ProductDevelopment
{
	void design() override {
		cout << "design for hardware product" << endl;
	}

	void produce() override {
		cout << "producing hardware product" << endl;
	}

};

