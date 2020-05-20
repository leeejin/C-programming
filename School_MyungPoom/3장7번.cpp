#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
class SelectableRandom{
	int sw;
public:
	SelectableRandom(int sw) {
		this->sw = sw; //짝수인지 홀수인지 판별하는 변수
		srand((unsigned)time(0));
		//시작할 때마다 다른 랜덤수를 발생시키기 위한 seed설정 
	}
	int next();
	int nexInRange(int a, int b);
};
int SelectableRandom::next() {
	//0에서 RAND_MAX(32767)사이의 랜덤한 정수 발생 
	if (sw == 0) {
		while (1) {
			int k = rand();
			if (k % 2 == 0) {
				return k;
				break;
			}
		}
	}
	else {
		while (1) {
			int k = rand();
			if (k % 2 != 0) {
				return k;
				break;
			}
		}
	}
}


int SelectableRandom::nexInRange(int a, int b) 
{
	//범위 a~b의 랜덤한 수 구하는 공식 
	if (sw == 0) {
		while (1) {
			int k = rand() % (b - a + 1) + a;
			if (k % 2 == 0) {
				return k;
				break;
			}
		}
	}
	else {
		while (1) {
			int k = rand() % (b - a + 1) + a;
			if (k % 2 != 0) {
				return k;
				break;
			}
		}

	}
}
int main() {
	cout << "짝수 0 홀수 1 입력";
	int sw;
	cin >> sw;
	SelectableRandom r(sw);
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	//RAND_MAX : <cstdlib>헤더 파일에 선언되어있는 수로 32767이다. 
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout <<endl<<endl<< "짝수 0 홀수 1 입력";
	cin >> sw;
	SelectableRandom s(sw);
	cout << endl << endl << "-- 2에서 " << "9까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nexInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}