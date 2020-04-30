//4장 7번
#include <iostream>
using namespace std;
class Circle
{
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int r)
{
	radius = r;
}
double Circle::getArea()
{
	return radius * radius * 3.14;
}
int main()
{
	int c =0, r;
	Circle *p = new Circle[3];
	for(int i=0; i<3; i++)
	{
		cout<<"원 "<<i+1<<"의 반지름 >> ";
		cin>>r;
		p[i].setRadius(r);
		if(p[i].getArea()>100)
		c++;
	}
	cout<<"면적이 100보다 큰 원은"<<c<<"개 입니다" ;
	delete p;
}