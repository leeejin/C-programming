#include <iostream>
using namespace std;
class Rectangle
{
	public:
		double width;
		double height;
		double getArea();
};
double Rectangle::getArea()
{
	return width*height/2;
}
int main()
{
	Rectangle rect;
	rect.width =3; 
	rect.height =5;
	cout<<"삼각형의 면적은 "<<rect.getArea()<<endl;
	return 0;
}