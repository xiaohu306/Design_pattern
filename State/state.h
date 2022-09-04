#pragma once
#include<cstdio>
//#include"work.h"
class  Work;
class State {
public:
	virtual void writeProgram(Work* w) = 0;
};
class MorningState : public State {
public:
	void writeProgram(Work* w);
};
class NoonState : public State {
public:
	void writeProgram(Work* w);
};
class AfternoonState : public State {
public:
	void writeProgram(Work* w);
		
};