#include <iostream>
#include <string>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }	
	friend Circle& operator++ (Circle &x);
	friend Circle operator++(Circle& x, int n);
};
Circle& operator++(Circle& x) {
	x.radius++;
	return x;
}
Circle operator++(Circle& x, int n) {
	Circle tmp=x;
	x.radius++;
	return tmp;
}
int main()
{
	Circle a(5),b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}