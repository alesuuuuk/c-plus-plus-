#pragma once
#include <iostream>
using namespace std;
class Text
{
protected:
	string text;
public:
	Text(string text) {
		this->text = text;
	}
	virtual void showText() {
		cout << text << endl;
	}
};

