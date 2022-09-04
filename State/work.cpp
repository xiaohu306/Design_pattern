#include"state.h"
#include"work.h"
Work::Work(): hour(9),cur(new MorningState()) {
}
void Work::setstate(State* s) {
		cur = s;
}
void  Work:: dowork() {
		cur->writeProgram(this);
}
