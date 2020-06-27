#include <iostream>
using namespace std;
class Circle {
	int radius; //반지름 길이
public:
	void setRadius(int radius) //반지름 설정
	{this->radius = radius;}
	double getArea()//면적을 리턴
	{return 3.14 * radius * radius; }
};
int main()
{
	int radius,count=0;
	Circle* p = new Circle[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "원" << i + 1 << "의 반지름 >>";
		cin >> radius;
		p[i].setRadius(radius);
		if (p[i].getArea() > 100)count++;
	}
	cout << "면적이 100보다 큰 원은" << count << "개 입니다.";
	delete []p;
}