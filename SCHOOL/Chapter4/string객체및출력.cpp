#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	string address("서울시 성북구 삼선동 389");
	string copyAddress(address);
	char text[] = { 'L','O','V','E',' ','C','+','+','\0' };
	string title(text);
	cout << address << endl;
	cout << title << endl;
	string* p = new string("C++");
	cout << *p << endl;
	p->append("Great!!");
	cout << *p;
	delete p;
}