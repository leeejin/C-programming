#include <iostream>
using namespace std;
struct StudentInfo
{
	char type;
	int stdNumber;
	float grade;	
};
int main()
{
	StudentInfo s1;
	StudentInfo s2;
	s1.type = 'O';
	s1.stdNumber = 200311128;
	s1.grade = 3.5f;
	s2.type = 'A';
	s2.stdNumber = 19961219;
	s2.grade = 2.3f;
	cout<<"학번 "<<s1.stdNumber<<"\n";
	cout<<"힉점 "<<s1.grade<<"\n";
	cout<<"혈액형  "<<s1.type<<"\n";
	cout<<"학번 "<<s2.stdNumber<<"\n";
	cout<<"힉점 "<<s2.grade<<"\n";
	cout<<"혈액형  "<<s2.type<<"\n";
	return 0;
}