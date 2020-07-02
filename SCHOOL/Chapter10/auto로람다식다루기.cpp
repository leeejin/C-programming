#include <iostream>
#include <string>
using namespace std;
int main() {
	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
	};
	love("돈", "너");
	love("냉면", "만두");
	[](int x, int y) {cout << "합은 " << x + y;}(2, 3);

	double pi = 3.14;
	auto calc = [pi](int r)-> double {return pi * r * r;};
	cout << "면적은 " << calc(3)<<endl;
	
	int sum = 0;
	[&sum](int x, int y) {sum = x + y;}(2, 3);
	//참조변수를 통해 외부에 값을 전달할 수 있다.
	cout << "합은 " << sum;
}