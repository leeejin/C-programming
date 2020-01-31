#include <iostream>
using namespace std;
int factorial(int n); 
int main()
{
	int result;
	result = factorial(5);
	cout<<"5!는 "<<result<<"입니다 \n";
	return 0;
}
int factorial(int n)
{
	int result = 1;
	for(int i=1; i<=n; ++i)
	{
		result *= i;
	}
	return result;
}