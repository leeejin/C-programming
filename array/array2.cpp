#include <iostream>
using namespace std;
void using1(int arr[][3]);
int main()
{
	int array[5][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
	using1(array);
	return 0;
}
void using1(int arr[][3])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<3; ++j)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\n";
		}
	}
}