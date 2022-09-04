#include<iostream>
using namespace std;
class compute {
public:
	virtual int getresult(int a, int b) = 0;
};
class add : public compute {
	int getresult(int a, int b) {
		cout << a << " + " << b << " = " << a + b << endl;
		return a + b;
	}
};
class sub : public compute {
	int getresult(int a, int b) {
		cout << a << " - " << b << " = " << a - b << endl;
		return a - b;
	}
};
class abstractfactory {
public:
	virtual compute* getcompute() = 0;
};
class addfactory : public abstractfactory {
	compute* getcompute() {
		return new add();
	}
};
class subfactory : public abstractfactory {
	compute* getcompute() {
		return new sub();
	}
};
int main() {
	abstractfactory* f = new addfactory();
	compute* oper = f->getcompute();
	oper->getresult(1, 2);

	f = new subfactory();
	oper = f->getcompute();
	oper->getresult(1, 2);
	return 0;
}
