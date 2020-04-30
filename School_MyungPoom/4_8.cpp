//4장 8번
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
	int n;
	cout<<"원의 개수>>";
	cin>>n;
	Circle *p = new Circle[n];
	for(int i=0; i<n; i++)
	{
		cout<<"원 "<<i+1<<"의 반지름 >> ";
		cin>>r;
		p->setRadius(r);
		if(p->getArea()>100)
			c++;
		p++;
	}
	cout<<"면적이 100보다 큰 원은 "<<c<<"개 입니다" ;
}