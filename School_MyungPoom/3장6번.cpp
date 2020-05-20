#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
class EvenRandom {
public:
	EvenRandom() {
		srand((unsigned)time(0));
		//시작할 때마다 다른 랜덤수를 발생시키기 위한 seed설정 
	}
	int next();
	int nexInRange(int a, int b);
};
int EvenRandom::next() {
	//0에서 RAND_MAX(32767)사이의 랜덤한 정수 발생 
	int n = rand();
	if (n % 2 == 0)
		return n;
	else return n - 1;
		
}
int EvenRandom::nexInRange(int a, int b) {
	//범위 a~b의 랜덤한 수 구하는 공식 
	int n = a + (rand() % (b - a + 1));
	if (n % 2 == 0)
		return  n;
	else return n - 1;
}
int main() {
	EvenRandom r;
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	//RAND_MAX : <cstdlib>헤더 파일에 선언되어있는 수로 32767이다. 
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nexInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}