#include<iostream>
using namespace std;
class Person {
private:
	string name;
public:
	Person(){}
	Person(string _name):name(_name){}
	virtual void show() {
		cout << "装扮的" << name << endl;
	}
};
class Decorator : public Person{
public:
	Decorator(Person* _p):_person(_p){}
	virtual void show() {
		_person->show();
	}
protected:
	Person* _person;
};
class DecoratorPants : public Decorator {
public:
	DecoratorPants(Person* _p) :Decorator(_p) {}
	virtual void show() {
		cout << "花裤子 ";
		_person->show();
	}
};
class DecoratorShoes : public Decorator {
public:
	DecoratorShoes(Person* _p) :Decorator(_p) {}
	virtual void show() {
		cout << "穿鞋子 ";
		_person->show();
	}
};
int main() {
	Person* p = new Person("张三");  //裸体张三
	Decorator* d = new DecoratorPants(p);
	d->show();
	d = new DecoratorShoes(d);
	d->show();
	return 0;
}
