#include <iostream>
using namespace std;
int Factorial(int n);
int main()
{
	int result;
	int num;
	cin>>num;
	result = Factorial(num);
	cout<<num<<"!는 "<<result<<"입니다 \n";
	return 0;
}
int Factorial(int n)
{
	int result =1;
	for(int i=1; i<=n; ++i)
	result *= i;
	return result;
}
