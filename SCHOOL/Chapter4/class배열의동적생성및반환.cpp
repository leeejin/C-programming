#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "생성자 실행 radius = " << radius << endl; }
	Circle(int r) { radius = r; cout << "생성자 실행 radius = " << radius << endl;}
	~Circle() { cout << "소멸자 실행 radius = " << radius << endl;} //소멸자는 생성의 반대순으로 실행
	void setRadius(int r) { radius = r; }
	double getArea() {return 3.14 * radius * radius;}
};
int main()
{
	Circle* pArray = new Circle[3];
	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	for (int i = 0; i < 3; i++) { cout << pArray[i].getArea() << endl; }
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) { cout << p->getArea() << endl; p++; }
	delete[] pArray;
}