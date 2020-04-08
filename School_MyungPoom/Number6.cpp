#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n,n1;
	cout<<"새 암호를 입력하세요>>";
	cin>>n;
	cout<<"새 암호를 다시 한 번 입력하세요>>";
	cin>>n1;
	if(n==n1)
	{
		cout<<"같습니다\n";
	}
	else
	{
		cout<<"다릅니다 \n"; 
	}
	return 0;
}