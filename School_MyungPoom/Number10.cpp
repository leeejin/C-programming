#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[10];
	cout<<"문자열 입력>>";
	cin.getline(a,10);
	for(int i=1; i<=strlen(a); i++)
	{
		for(int j=0; j<i; j++)
		cout<<a[j];
		cout<<"\n";
	}
	return 0;
}