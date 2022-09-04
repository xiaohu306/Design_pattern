#include<iostream>
#include"state.h"
#include"work.h"
#include"mybb.h"
using namespace std;
int main() {
	Work* w = new Work();
	w->hour = 15;
	w->dowork();
	w->dowork();
	w->hour = 20;
	w->dowork();
	return 0;
}
