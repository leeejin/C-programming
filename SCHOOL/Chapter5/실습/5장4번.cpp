#include <iostream>
using namespace std;
bool bigger(int a, int b, int& big) {
	if (a == b) return true;
	else { big = (a > b) ? a : b; return false; }
}
int main()
{
	cout << "두개의 정수를 입력해주세요 >>";
	int n1, n2,big;
	cin >> n1 >> n2;
	if (bigger(n1, n2, big)) cout << "a와 b가 같습니다. " << endl;
	else
	cout <<"더 큰수 >>"<< big << endl;
}