#include <iostream>
using namespace std;
template <class T>
T equalArrays(T x[],T y[],int n) {
	for (int i = 0; i < n; i++)
	{
		if (x[n] == y[n])return true;
		else return false;
	}
}
int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	if (equalArrays(x, y, 5))cout << "같다";
	else cout << "다르다";
}