#include <iostream>
#include <string>
using namespace std;
int main()
{
	string path = "c:\\My Document\\Pictures\\33.jpg";
	int len = path.size();
	string ext = path.substr(len -3,3);
	//문자열 객체 path에서 끝의 3바이트만 읽어온다. 
	cout<<"extention = "<<ext<<"\n";
	return 0;
}