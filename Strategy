#include<iostream>
using namespace std;
class helloworld {
public:
	virtual void showcode(){}
};
class CppHello : public helloworld
{
	void showcode(){
		cout << "cout<<\"Hello World\";\n";
	}
};
class PyHello : public helloworld
{
	void showcode() {
		cout << "print(\"Hello World\")\n";
	}
};
class itpeople {
public:
	helloworld* h;
	void setLanguage(helloworld* _h) {
		this->h = _h;
	}
	void code() {
		this->h->showcode();
	}
};
int main() {
	itpeople* p = new itpeople();
	p->setLanguage(new CppHello());
	p->code();
	p->setLanguage(new PyHello());
	p->code();
	return 0;
}
