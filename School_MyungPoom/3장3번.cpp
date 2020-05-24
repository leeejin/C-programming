#include <iostream>
#include <string>
using namespace std;
class Account {
	string name;
	int n1, n2;
public:
	Account() { name = " "; n1 = 0; n2 = 0; }
	Account(string n, int num, int N2) { name = n; n1 = num; n2 = N2; }
	void deposit(int mon) { n2 += mon; }
	string getOwner() {  return name; }
	int inquiry() { return n2; }
	int withdraw(int mon) { n2 -= mon; return n2; }
};
int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}