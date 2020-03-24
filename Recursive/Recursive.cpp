#include <iostream>
using namespace std;
void WhilePositive(int n)
{
	cout<<"n= "<<n<<"\n";
	if(n<0)
	return;
	WhilePositive(n-1);
	cout<<"n= "<<n<<"\n";
}
int main()
{
	WhilePositive(10);
	return 0;
}