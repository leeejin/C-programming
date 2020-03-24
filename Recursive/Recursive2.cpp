#include <iostream>
using namespace std;
void Convert2Bin(int dec)
{
	if(dec <=0)
	return;
	Convert2Bin(dec /2);
	cout<<dec%2;
}
int main()
{
	Convert2Bin(13);
	cout<<"\n";
	return 0;
}