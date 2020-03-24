#include <iostream>
using namespace std;
void Dog()
{
	cout<<"I'm a dog. \n";
}
void Cat()
{
	cout<<"I'm a cat \n";
}
int main()
{
	void (*p)();
	p= &Dog;
	(*p)();
	p=&Cat;
	(*p)();
	return 0;
}