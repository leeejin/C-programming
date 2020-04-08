#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout<<"에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다. \n";
	char coffee[100];
	int num;
	int sum =0;
	while(1)
	{
	cout<<"주문>>";
	cin>>coffee>>num;
	if(strcmp(coffee, "에스프레소")==0)
	{
		sum += 2000 * num;
		cout<<2000 * num<<"원입니다. 맛있게 드세요 \n";
	}
	if(strcmp(coffee,"아메리카노")==0)
	{
		sum += 2300 * num;
		cout<<2300 * num<<"원입니다. 맛있게 드세요 \n";
	}
	if(strcmp(coffee,"카푸치노")==0)
	{
		sum += 2500 * num;
		cout<<2500 * num<<"원입니다. 맛있게 드세요 \n";
	}
	if(sum>=20000)
	{
		cout<<"오늘 "<<sum<<"원을 판매하여 카페를 닫습니다. 내일 봐요~~~ \n";
		break;
	}
	}
	return 0;
}