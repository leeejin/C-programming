#include <iostream>
#include <string>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }	
	friend Circle operator+(int n1, Circle n2);
};
Circle operator+(int n1, Circle n2) {
	Circle x;
	x.radius = n1 + n2.radius;
	return x;
}
int main()
{
	Circle a(5),b(4);
	b = 1 + a;
	a.show();
	b.show();
}