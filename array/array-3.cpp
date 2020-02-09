#include <iostream>
#include <string>
using namespace std;
int main()
{
	string cppstyle = "Yes, I am.";
	const char* cstyle = NULL;
	cstyle = cppstyle.c_str();
	//string 클래스의 c_str()함수는 C스타일 문자열의 주소를 반환
	//이 주소에 포인터 변수 cstyle을 보관한 
	cout<<"cstyle = "<<cstyle<<"\n";
	cout<<"cppstyle = "<<cppstyle<<"\n";
	return 0;
}