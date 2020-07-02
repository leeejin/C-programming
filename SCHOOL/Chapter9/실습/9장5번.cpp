#include <iostream>
#include <string>
using namespace std;
class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};
class ANDGate : public AbstractGate {
public:
	bool operation() {
		if (x == true && y == true)return true;
		else return false;
	}
};
class ORGate : public AbstractGate {
public:
	bool operation() {
		if (x == true || y == true)return true;
		else return false;
	}
};
class XORGate : public AbstractGate {
public:
	bool operation() {
		if (x != y)return true;
		else return false;
	}

};
int main() {
	ANDGate a;
	ORGate o;
	XORGate xo;

	a.set(true, false);
	o.set(true, false);
	xo.set(true, false);
	cout.setf(ios::boolalpha);
	cout << a.operation() << endl;
	cout << o.operation() << endl;
	cout << xo.operation() << endl;
}