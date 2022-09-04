#include<iostream>
using namespace std;
class computer {
public:
	virtual void getcomputer() = 0;
};
class Huawei_computer : public computer {
	void getcomputer() {
		cout << "华为电脑\n";
	}
};
class Xiaomi_computer : public computer {
	void getcomputer() {
		cout << "小米电脑\n";
	}
};
class router {
public:
	virtual void getrouter() = 0;
};
class Huawei_router : public router {
	void getrouter() {
		cout << "华为路由\n";
	}
};
class Xiaomi_router : public router {
	void getrouter() {
		cout << "小米路由\n";
	}
};
class AbstractFactory {
public:
	virtual router* producerouter() = 0;
	virtual computer* producecomputer() = 0;
};
class HuaweiFactory :public AbstractFactory {
	router* producerouter() {
		return new Huawei_router();
	}
	computer* producecomputer() {
		return new Huawei_computer();
	}
};
class XiaomiFactory :public AbstractFactory {
	router* producerouter() {
		return new Xiaomi_router();
	}
	computer* producecomputer() {
		return new Xiaomi_computer();
	}
};
int main() {
	AbstractFactory* f = new HuaweiFactory();
	computer* c = f->producecomputer();
	router* r = f->producerouter();
	c->getcomputer();
	r->getrouter();
	return 0;
}
