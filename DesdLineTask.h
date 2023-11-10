#pragma once
#include "Text.h"
class DesdLineTask :public Text
{
private:
	int month;
	int day;
public:
	DesdLineTask(string text, int month, int day) : Text(text) {
		this->month = month;
		this->day = day;
	}
	void showText() override {
		cout << "Date: " << month << "." << day << " " << text;
	}
};

