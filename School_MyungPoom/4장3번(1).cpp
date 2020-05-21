#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	int a = 0;
	cout << "문자열 입력";
	getline(cin, text);
	for (int i = 0; i < text.length(); ++i) {
		if (text[i] == 'a')++a;
	}
	cout << "문자 a는 " << a << "개 있습니다" << endl;
}