#include<iostream>
#include<string>
using namespace std;
class AbstractAnimal {
protected:
	string name;
public:
	virtual void AnimalCry() = 0;
	virtual AbstractAnimal* Clone() = 0;
};
class Sheep : public AbstractAnimal {
public:
	Sheep(string _name){
		name = _name;
	}
	Sheep(const Sheep& s) {
		name = s.name + "二号";
	}
	void AnimalCry() {
		cout << name << " 咩咩咩\n";
	}
	AbstractAnimal* Clone() {
		return new Sheep(*this);
	}
};
class Cat : public AbstractAnimal {
public:
	Cat(string _name) {
		name = _name;
	}
	Cat(const Cat& s) {
		name = s.name + "二号";
	}
	void AnimalCry() {
		cout << name << " 喵喵喵\n";
	}
	AbstractAnimal* Clone() {
		return new Cat(*this);
	}
};
int main() {
	AbstractAnimal* sheep = new Sheep("喜羊羊");
	AbstractAnimal* sheep1 = sheep->Clone();
	sheep1->AnimalCry();
	return 0;
}
