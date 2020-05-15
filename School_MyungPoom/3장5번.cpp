#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
class Random{
	public:
		Random() {srand((unsigned)time(0));
		//시작할 때마다 다른 랜덤수를 발생시키기 위한 seed설정 
		}
		int next();
		int nexInRange(int a,int b);
};
int Random::next(){
	int n = rand();
	//0에서 RAND_MAX(32767)사이의 랜덤한 정수 발생 
	return n;
}
int Random::nexInRange(int a,int b){
	int n;
	n = a +(rand()%(b-a+1));
	//범위 a~b의 랜덤한 수 구하는 공식 
	return n;
}
int main(){
	Random r;
	cout<<"-- 0에서"<<RAND_MAX<<"까지의 랜덤 정수 10개--"<<endl;
	//RAND_MAX : <cstdlib>헤더 파일에 선언되어있는 수로 32767이다. 
	for(int i=0; i<10; i++){
		int n=r.next();
		cout<<n<<' ';
	}
	cout<<endl<<endl<<"-- 2에서 "<<"4까지의 랜덤 정수 10개--"<<endl;
	for(int i=0;i<10;i++)
	{
		int n = r.nexInRange(2,4);
		cout<<n<<' ';
	}
	cout<<endl;
}