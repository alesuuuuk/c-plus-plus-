#pragma once
#include "ProductDevelopment.h"
class SoftwareProduct : public ProductDevelopment
{
	void design() override {
		cout << "Some design for software product" << endl;
	}
	void produce() override {
		cout << "producing software product" << endl;
	}
};

