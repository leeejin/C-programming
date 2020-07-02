#include <iostream>
using namespace std;
template <class T>
T biggest(T x[], int n) {
	T big = x[0];
	for (int i = 0; i < n; i++)
		if (x[i] > big)big = x[i];
	return big;
}
int main() {
	int x[] = { 1,10,100,5,4 };
	double y[] = { 1.1,2.2,3.3,4.4,5.5 };
	char z[] = { 's','u','j','i','n' };
	cout << biggest(x, 5) << endl;
	cout << biggest(y, 5) << endl;
	cout << biggest(z, 5) << endl;
}