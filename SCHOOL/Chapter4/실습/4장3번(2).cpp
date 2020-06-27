#include <iostream>
#include <string>
using namespace std;
int main()
{
	string p;
	cout << "문자열 입력>>";
	getline(cin, p, '\n');
	int count = 0;
	for (int i = 0; i < p.length(); i++)
	{
		if (p[i] == 'a')
			count++;
	}
	cout << "문자 a는" << count << "개 있습니다.";
}