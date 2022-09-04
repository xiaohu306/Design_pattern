#include<iostream>
#include<string>
using namespace std;
class open_door {
public:
	virtual void open()  = 0;
};
class myhome : public open_door {
public:
	void open() {
		cout << "我家开门啦\n";
	}
};
class proxy : public open_door {
public:
	proxy(string _name) :name(_name),p(new myhome()){
		
	}
	void open() {
		if (name == "我") {
			this->p->open();
		}
		else {
			cout << "进错门了\n";
		}	
	}
private:
	myhome* p;
	string name;
};
int main() {	
	proxy* p = new proxy("我");
	p->open();
	p = new proxy("别人");
	p->open();
	open_door* p1=p;
	p1->open();
	return 0;
}
