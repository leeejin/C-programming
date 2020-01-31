#include <iostream>
using namespace std;
void convert(int dec)
{
	if(dec<=0) return;
	convert(dec/2);
	cout<<dec % 2 ;
	
}
int main()
{
	convert(13);
	cout<<"\n";
	return 0;
}