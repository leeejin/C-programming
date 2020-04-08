#include <iostream>
using namespace std;
int main()
{
	float n[5];
	cout<<"5 개의 실수를 입력하라>>";
	for(int i=0; i<5; i++)
	{
		cin>>n[i];
	}
	float max = n[0];
	for(int i=0; i<5; i++)
	{
		if(n[i]<n[i+1])
		{
			max = n[i+1];
		}
	}
	cout<<"제일 큰 수 = "<<max;
	return 0;
}