#include <iostream>
#include <string>
using namespace std;
int main()
{
	char cstyle[] = "Are you a string, too?";
	string cppstyle;
	cppstyle = cstyle;
	cout<<"cstyle = "<<cstyle<<"\n";
	cout<<"cppstyle = "<<cppstyle<<"\n";
	return 0;
}