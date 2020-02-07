#include <iostream>
using namespace std;
char* ReverseString(const char* src, int len)
{
	char* reverse = new char[len+1];
	for(int i=0; i<len; ++i)
	{
		reverse[i] = src[len - i -1];
	}
	reverse[len]= NULL;
	return reverse;
 } 
int main()
{
	char original[] = "NEMODORI";
	char* copy = ReverseString(original,8);
	cout<<original<<"\n";
	cout<<copy<<"\n";
	delete[] copy;
	copy = NULL;
	return 0;
}