#include <iostream>
using namespace std;
int main()
{
	char a[10];
	do
	{
		cout<<"종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(a,10);
	}while(a =="yes");
	cout<<"종료합니다. . .";
	return 0;
}