#include <iostream>
using namespace std;
struct RetValue
{
	int retvalue1;
	int retvalue2;
}; 
RetValue Plus(int a, int b)
{
	RetValue ret;
	ret.retvalue1 = a+b;
	ret.retvalue2 = a-b;
	return ret;
}
int main()
{
	RetValue result;
	result = Plus(3,5);
	cout<<"3+5 = "<<result.retvalue1<<endl;
	cout<<"3-5 = "<<result.retvalue2<<endl;
	return 0;
}