#include<iostream>
using namespace std;
enum class phonebrand{
	Huawei,
	Xiaomi
};
class Phone {
public:
	virtual void printname() = 0;
};
class Huawei : public Phone {
	void printname() {
		cout << "Huawei\n";
	}
};
class Xiaomi : public Phone {
	void printname() {
		cout << "Xiaomi\n";
	}
};
class Simplefactory {
public:
	static Phone* getphone(phonebrand brand) {
		switch (brand) {
		case phonebrand::Huawei:
			return new Huawei();
		case phonebrand::Xiaomi:
			return new	Xiaomi();
		default:
			return nullptr;
		}
	}
};

int main() {
	Phone* myphone = Simplefactory::getphone(phonebrand::Huawei);
	myphone->printname();
	myphone = Simplefactory::getphone(phonebrand::Xiaomi);
	myphone->printname();
	return 0;
}
