#include <iostream>
#include <string>
using namespace std;
void TJ(string a,string song);
void gold_young(string a,string song);
int main()
{
	string a;
	string song;
	cout<<"지극히 개인적으로 노래방 갔을때 노래번호를 쉽게 찾기위한 것.(only 米津玄師の歌)\n변경가능성 多\n지금 있는 노래방은?"<<"\n";
	cin>>a;
	if(a == "TJ"||a=="tj")
	{
		TJ(a,song);
	}
	else if(a=="금영")
	{
		gold_young(a,song);
	}
	else
	{
		cout<<"찾는노래방이 없습니다.\n다시 시도해 주세요.";
	}
	return 0; 
}
void TJ(string a,string song)
{
	cout<<"찾는 노래는?"<<"\n";
	cin>>song;
	if(song=="바다의 유령")
	{
		cout<<"68019"<<"\n";
	 } 
	else if(song =="아이네 클라이네")
	{
		cout<<"28607"<<"\n";
	}
	else if(song == "잿빛과 푸름")
	{
		cout<<"28789"<<"\n";
	}
	 else if(song == "춘뢰")
	 {
		cout<<"28795"<<"\n";
	 }
	 else if(song == "loser")
	 {
	 	cout<<"28686"<<"\n";
	 }
	 else if(song == "flamingo")
	 {
	 	cout<<"28983"<<"\n";
	 }
	 else
	 {
	 	cout<<"찾는노래없음";
	 }
}
void gold_young(string a,string song)
{
	cout<<"찾는 노래는?"<<"\n";
	cin>>song;
	 if(song =="아이네 클라이네")
	{
		cout<<"44040"<<"\n";
	}
	else if(song == "잿빛과 푸름")
	{
		cout<<"44207"<<"\n";
	}
	else if(song == "춘뢰")
	{
		cout<<"44227"<<"\n";
	}
	else if(song =="loser")
	{
		cout<<"44148"<<"\n";
	}
	else
	{
		cout<<"찾는 노래 없음";
	}	
}