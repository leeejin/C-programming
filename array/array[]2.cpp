#include <iostream>
#include <cstring> 
//c는 c++에서 제공하는 함수, string은 문자열 관련 함수 
using namespace std;
int main()
{
	 char str1[20] = "abcde";
	 char str2[] = "fghij";
	 strcat(str1,str2);
	  /* 두 문자열 결합 str1이 가리키는 문자열 뒤에 str2가 가리키는 문자열이 덧붙이게 된다
	  이렇게 결합한 문자열은 다시 str1에 보관한다*/
	  if(strcmp(str1,"abcdefghij")==0)
	  cout<<"str1 and \"abcdefghij\" are identical \n";
	  if(strcmp("123456",str1)!=0)
	  cout<<"str1 and \"123456\" are identical \n";
	return 0;
}