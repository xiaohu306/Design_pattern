#include<cstdio>
#include"state.h"
#include"work.h"
void MorningState ::writeProgram(Work* s) {
		if (s->hour < 12) {
			printf("��ǰʱ��%d, ���繤��,ή�Ҳ���\n", s->hour);
		}
		else {
			s->setstate(new NoonState());
			s->dowork();
		}
}
void NoonState::writeProgram(Work* s) {
		if (s->hour < 13) {
			printf("��ǰʱ��%d, ����,�óԷ���\n", s->hour);
		}
		else {
			s->setstate(new AfternoonState());
			s->dowork();
		}
}
void AfternoonState::writeProgram(Work* s) {
		if (s->hour < 17) {
			printf("��ǰʱ��%d, ���繤��,������\n", s->hour);
		}
		else {
			printf("��ǰʱ��%d, �°�!\n", s->hour);
		}
}
