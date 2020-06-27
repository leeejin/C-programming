#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() { 
	return 3.14 * radius * radius;
}
int main()
{
	Circle donut;
	Circle pizza(30);
	double d = donut.getArea(); //객체 이름으로 멤버함수 호출
	cout << d << endl;
	Circle* p;
	p = &donut; //포인터로 객체 멤버 함수 호출
	cout << p->getArea() << endl; // = d=(*p).getArea();
	cout << (*p).getArea() << endl;
	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}