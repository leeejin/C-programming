#include <iostream>
using namespace std;
int main()
{
	//메모리 할당 
	short* p = new short[100];
	//p에 보관한 주소 값을 확인한다 
	cout<<"p = "<<p<<"\n";
	//메모리 해제 
	delete[ ] p;
	//p에 보관한 주소 값 확인 
	cout<<"p = "<<p<<"\n";
	//메모리 해제
	delete[ ] p;
	
	return 0;
}