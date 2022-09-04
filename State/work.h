//#pragma once
#include"state.h"
class Work {
private:
	State* cur;
public:
	int hour;
	Work();
	void setstate(State* c);
	void dowork();
};