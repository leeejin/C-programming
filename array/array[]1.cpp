#include <iostream>
#include <cstring> 
//c는 c++에서 제공하는 함수, string은 문자열 관련 함수 
using namespace std;
//문자열의 길이와 복사 
int main()
{
	char src[] = "HANBIT - MEDIA";
	int len = strlen(src); //원본 문자열의 길이를 잰다
	char* dest = new char [len +1];
	strcpy(dest,src); // 문자열 src의 내용을 dest로 옮긴다  "dest<-src" 
	cout<<"src = "<<src<<"\n";
	cout<<"dest = "<<dest<<"\n";
	//메모리 헤제 
	delete [] dest;
	dest = NULL;	 
	return 0;
}