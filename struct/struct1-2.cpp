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
	StudentInfo player;
	cout<<"혈액형 입력: ";
	cin>>player.type;
	cout<<"학번 입력 : ";
	cin>>player.stdNumber;
	cout<<"학점 입력 : "<<"\n";
	cin>>player.grade;
	cout<<"학번 "<<player.stdNumber<<"\n";
	cout<<"힉점 "<<player.grade<<"\n";
	cout<<"혈액형  "<<player.type<<"\n";
	return 0;
}