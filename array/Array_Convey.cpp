#include <iostream>
using namespace std;
void UsingArray(char arr[]);
int main()
{
	char array[20] = "HELLO, WORLD!";
	UsingArray(array);
	cout<<"Int main() : "<<array<<"\n";
	return 0;
}
void UsingArray(char array[])
{
	cout<<"In UsingArray() : "<<array<<"\n";
	array[12] = '?';
}