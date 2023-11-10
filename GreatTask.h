#pragma once
#include "Text.h"
class GreatTask :public Text
{
public:	
	GreatTask(string text) : Text(text) {}
	
	void showText() override {
		cout << "!!! " << text << endl;
	}
};

