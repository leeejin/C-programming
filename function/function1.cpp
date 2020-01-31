#include <iostream>
using namespace std;
void printmessage();//printmessage라는 함수가 아래쪽에 있다는 점을 전한다 
int main()
{
	
	printmessage();
	
	return 0;
}
void printmessage()
{
	cout<<"hi,I'm your father"<<"\n";
}