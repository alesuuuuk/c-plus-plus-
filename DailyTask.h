#pragma once
#include "Text.h"
class DailyTask :public Text
{
private:
	int hour;
	int minute;
public:
	DailyTask(string text, int hour) : Text(text) {
		this->hour = hour;
		this->minute = 0;
	}
	DailyTask(string text, int hour, int minute) : Text(text) {
		this->hour = hour;
		this->minute = minute;
	}

	void showText() override {
		cout << "Time: " << hour << ":" << minute << " " << text;
	}
};

