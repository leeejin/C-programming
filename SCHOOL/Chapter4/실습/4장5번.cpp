#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	string p;
	srand((unsigned)time(0));
	int n;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
	while (true)
	{
		srand((unsigned)time(0));
		cout << "\n>>";
		getline(cin, p, '\n');
		if (p == "exit")break;
		int length = p.length();
		while (true)
		{
			n = rand() % length;
			if (p[n] != ' ')break;
		}
		int a = rand() % 25 + 95;
		p[n] = (char)a;
		cout << p;
	}
}