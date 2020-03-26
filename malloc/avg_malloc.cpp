#include <iostream>
using namespace std;
int main()
{
	int size; //몇개의 정수를 입력할것인가
	cout<<"몇 개의 정수를 입력하시겠소?";
	cin>>size;
	int* arr = new int [size];
	cout<<"정수를 입력하시오. \n";
	for(int i=0; i<size; ++i)
	{
		cin>>arr[i];
	 } 
	 int sum =0;
	 for( int i=0; i<size; ++i)
	 {
	 	sum += arr[i];
	 }
	 float avg = (float)sum / (float)size;
	 cout<<"합 = "<<sum <<", 평균 =" <<avg<<"\n";
	 delete[] arr;
	 return 0;
}