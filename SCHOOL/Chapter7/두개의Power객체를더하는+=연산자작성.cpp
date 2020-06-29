#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	Power& operator+= (Power op2);
};
void Power::show() {
	cout << "kick= " << kick << ", punch= " << punch << endl;
}
Power& Power::operator+=(Power op2)
{
	kick += op2.kick; //kick더하기
	punch += op2.punch; //punch더하기
	return *this; //합한 결과 리턴, 갱신된 Power 객체 a 리턴
}
int main()
{
	Power a(3, 5), b(4, 6),c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}