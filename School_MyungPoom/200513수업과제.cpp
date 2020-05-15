5장 3번
#include <iostream>
using namespace std;
#include <string>
void combine(string t1, string t2, string &t3){
	t3 = t1 + " "+t2;	
}
int main()
{
	string text1("I love you"), text2("very much");
	string text3; //비어있는 문자열 
	combine(text1,text2,text3);  //text1과 " ",그리고 text2를 덧붙여 text3만들기 
	cout<<text3; //"I love you very much"출력 
}

5장 5번
#include <iostream>
using namespace std;
class Circle{
	int radius;
	public:
		Circle(int r){ radius=r;}
		int getRadius() { return radius;
		}
		void setRadius(int r) { radius =r;
		}
		void show() { cout<<"반지름이"<<radius<<"인 원"<<endl;
		}
};
void increaseBy(Circle &a, Circle b){
	int r = a.getRadius()+b.getRadius();
	a.setRadius(r);
} 
int main()
{
	Circle x(10),y(5);
	increaseBy(x,y);
	x.show();
}

5장 6번
#include <iostream>
#include <cstring>
using namespace std; 
char& find(char a[],char c, bool& success); 
int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s,'M',b);
	if(b==false){
		cout<<"M을 발견할 수 없다"<<endl;
		return 0;
	}
	loc='M'; //'M'위치에 'm'기록 
	cout<<s<<endl;//"Mike"가 출력됨 
}
char& find(char a[],char c, bool& success){
	for(int i=0; i<strlen(a); ++i){
		if(a[i]==c)success=true;
	}
	return *a;	
}