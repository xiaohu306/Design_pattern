#include<iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Website {
	std::string name;
public:
	Website() {
		this->name = "";
		std::cout << "Creat a null website ! " << std::endl;
	}
	Website(std::string name) {
		this->name = name;
		std::cout << "Creat a  " << name<<" website ! "<< std::endl;
	}
	void show() {
		std::cout << "I am a " << this->name << " website ! " << std::endl;
	}
};
class WebsiteManager {
	 std::unordered_map<std::string, Website> mp;
public:
	WebsiteManager() {
		
	}
	Website getWebsite(std::string name) {
		std::unordered_map<std::string, Website>::iterator item = mp.find(name);
		if (item == mp.end()) {
			mp[name] = Website(name);  //两次构造函数
		}
		return mp[name];
	}
};
int main() {
	WebsiteManager m;
	Website w = m.getWebsite("聊天");
	w.show();
	Website w1 = m.getWebsite("聊天");
	w1.show();
	return 0;
}
