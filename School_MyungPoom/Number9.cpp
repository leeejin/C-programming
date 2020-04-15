#include <iostream>
using namespace std;
int main()
{
	char a[100],b[100];
	int c;
	cout<<"이름은?";
	cin.getline(a,100);
	cout<<"주소는?";
	cin.getline(b,100);
	cout<<"나이는?";
	cin>>c;
	cout<<a<<", "<<b<<", "<<c<<"세";	
	return 0;
}