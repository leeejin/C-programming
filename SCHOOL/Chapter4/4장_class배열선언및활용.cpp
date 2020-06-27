#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() { 
	return 3.14 * radius * radius;
}
int main()
{
	Circle circleArray[3]; //Circle  객체 배열 생성
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);  //배열의 각 원소 객체의 멤버 접근
	for (int i = 0; i < 3; i++) //배열의 각 원소 객체의 멤버 접근
	{
		cout << "Circle " << i << "의 면적은" << circleArray[i].getArea() << endl;
	}
	Circle* p= circleArray;
	for (int i = 0; i < 3; i++) {//포인터 p의 정수 연산 이용
		cout << "CIrcle " << i << "의 면적은" << (p + i)->getArea() << endl;
	}
	for (int i = 0; i < 3; i++) {//포인터 p를 이용하여 객체처럼 접근
		cout << "CIrcle " << i << "의 면적은" << (*p++).getArea() << endl;
	}
	for (int i = 0; i < 3; i++) {//객체의 포인터로 접근
		cout << "CIrcle " << i << "의 면적은" << p->getArea() << endl;
		p++; //p는 배열의 다음 원소를 가리킴
	}
	for (int i = 0; i < 3; i++) {//배열의 이름 circleArray를 포인터로 사용
		cout << "CIrcle " << i << "의 면적은" << (circleArray+i)->getArea() << endl;
	}
	