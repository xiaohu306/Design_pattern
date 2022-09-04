#include<iostream>
using namespace std;
class DrinkTemplate {
public:
    //煮水
    virtual void BoildWater() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加辅助材料
    virtual void AddSomething() = 0;

    //模板方法
    void Make() {
        BoildWater();
        Brew();
        PourInCup();
        AddSomething();
    }
};

//做咖啡：  实现做饮料模板
class Coffee :public DrinkTemplate {
    virtual void BoildWater() {
        cout << "煮山泉水" << endl;
    }
    virtual void Brew() {
        cout << "冲泡咖啡" << endl;
    }
    virtual void PourInCup() {
        cout << "咖啡倒入杯中" << endl;
    }
    virtual void AddSomething() {
        cout << "加糖，加牛奶" << endl;
    }
};

//做茶：  实现做饮料模板
class Tea :public DrinkTemplate {
    virtual void BoildWater() {
        cout << "煮自来水" << endl;
    }
    virtual void Brew() {
        cout << "冲泡铁观音" << endl;
    }
    virtual void PourInCup() {
        cout << "茶水倒入杯中" << endl;
    }
    virtual void AddSomething() {
        cout << "加糖,加大蒜" << endl;
    }
};
int main()
{
    DrinkTemplate* d = new Tea;
    d->Make();
    d = new Coffee;
    d->Make();
	return 0;
}
