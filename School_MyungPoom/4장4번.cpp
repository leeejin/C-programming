#include <iostream>
#include <string>
using namespace std;
class Person{
	string name;
	string tel;
public:
	string getName();
	string getTel();
	void set(string n, string t);
};
string Person::getName(){
	return name;
}
string Person::getTel(){
	return tel;
}
void Person::set(string n, string t)
{
	name = n;
	tel =t;
}
int main()
{
	int n;
	Person p[3];
	string name, number;
	cout<<"이름과 전화번호 입력"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"사람 "<<i+1<<">>";
		cin>>name>>number;
		p[i].set(name,number);
	}
	cout<<"모든 사람의 이름은";
	for(int i=0; i<3; i++)
		cout<<p[i].getName()<<" ";
	cout<<endl<<"전화번호를 검색합니다. 이름을 입력하세요 >>";
	cin>>name;
	for(int i=0;i<3; i++)
	if(p[i].getName()==name) n=i;
	cout<<"전화 번호는"<<p[n].getTel()<<endl;
}