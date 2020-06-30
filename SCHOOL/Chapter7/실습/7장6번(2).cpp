#include <iostream>
#include <string>
using namespace std;
class Matrix {
	int x[4];
public:
	Matrix() { for (int i = 0; i < 4; i++) x[i] = 0; }
	Matrix(int n1, int n2, int n3, int n4) {
		x[0] = n1; x[1] = n2; x[2] = n3; x[3] = n4;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++)
			cout << x[i] << ' ';
		cout << "}" << endl;
	}
	friend Matrix operator+(Matrix n,Matrix s);
	friend Matrix& operator+=(Matrix& n,Matrix s);
	friend bool operator==(Matrix n,Matrix s);
};
Matrix operator+(Matrix n,Matrix s) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) {
		tmp.x[i] = s.x[i] + n.x[i];
	}
	return tmp;
}
Matrix& operator+=(Matrix& n,Matrix s) {
	for (int i = 0; i < 4; i++) {
		n.x[i] += s.x[i];
	}
	return n;
}
bool operator==(Matrix n,Matrix s) {
	for (int i = 0; i < 4; i++) {
		if (n.x[i] == s.x[i])return true;
		else return false;
	}
}
int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) cout << "a and c are the same" << endl;
}