#include <iostream>
using namespace std;
class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};
int Person::sharedMoney = 10;
int main()
{
	Person::addShared(50); //static 멤버 접근,공금=60
	cout << Person::sharedMoney << endl;
	Person han;
	han.money = 100;
	han.sharedMoney = 200; //static 멤버 접근,공금=200
	Person::sharedMoney = 300; //static 멤버 접근,공금=300
	Person::addShared(100);//static 멤버 접근,공금=400
	cout << han.money << ' ' << Person::sharedMoney<< endl;
}