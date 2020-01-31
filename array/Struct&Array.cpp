#include <iostream>
using namespace std;
struct StudentInfo
{
	char name[20];
	int stdNumber;
	float grade[2];
};
int main()
{
	StudentInfo si = {"lee su-jin",19990316,{4.19f,4.05f}};
	cout<<si.name<<"\n";
	cout<<si.stdNumber<<"\n";
	cout<<si.grade[0]<<", "<<si.grade[1]<<"\n";
	return 0;
}