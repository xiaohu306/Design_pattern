#include<cstdio>
#include"state.h"
#include"work.h"
void MorningState ::writeProgram(Work* s) {
		if (s->hour < 12) {
			printf("当前时间%d, 上午工作,萎靡不振\n", s->hour);
		}
		else {
			s->setstate(new NoonState());
			s->dowork();
		}
}
void NoonState::writeProgram(Work* s) {
		if (s->hour < 13) {
			printf("当前时间%d, 饿饿,该吃饭了\n", s->hour);
		}
		else {
			s->setstate(new AfternoonState());
			s->dowork();
		}
}
void AfternoonState::writeProgram(Work* s) {
		if (s->hour < 17) {
			printf("当前时间%d, 下午工作,精神抖擞\n", s->hour);
		}
		else {
			printf("当前时间%d, 下班!\n", s->hour);
		}
}
