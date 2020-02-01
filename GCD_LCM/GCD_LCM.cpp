#include <iostream>
using namespace std;
void gcd_lcm(int a,int b, int* pgcd, int* plcm)
{
	int z;
	int x = a;
	int y = b;
	while(1)
	{
		z = x %y ;
		if( 0 == z) break;
		x = y;
		y = z;
		
	}
	*pgcd = y;
	*plcm = a * b / *pgcd;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int gcd = gcd;
	int lcm = lcm;
	gcd_lcm(a,b,&gcd,&lcm);
	cout<<"gcd = "<<gcd<<"\n";
	cout<<"lcm = "<<lcm<<"\n";
	return 0;
}