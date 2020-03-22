#include <iostream>
using namespace std;
struct Point
{
	int x,y;
};
double Distance(Point p1,Point p2);
int main()
{
	Point a = {0,0};
	Point b = {3,4};
	double dist_a_b = Distance(a,b);
	cout<<"("<<a.x<<", "<<a.y<<")와 ";
	cout<<"("<<b.x<<", "<<b.y<<")의 거리 ="<<dist_a_b<<"\n"; 
	return 0;
}
double Distance(Point p1,Point p2)
{
	cout<<"p1 = ( "<<p1.x<<", "<<p1.y<<") \n";
	cout<<"p2 = ( "<<p2.x<<", "<<p2.y<<") \n";
	return 0.0f;
}