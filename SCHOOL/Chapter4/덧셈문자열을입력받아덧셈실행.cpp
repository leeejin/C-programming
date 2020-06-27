#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int start = 0; //문자열 내에 검색할 시작 인덱스
	while (true) {
		int findex = s.find('+', start); //'+' 문자 검색
		if (findex == -1) { //'+' 문자 발견 X
			string part = s.substr(start); 
			if (part == "")break; //"2+3+",즉 +로 끝나는 경우
			cout << part << endl;
			sum += stoi(part); //문자열을 수로 변환하여 더하기
			break;
		}
		int count = findex - start; //서브스트링으로 자를 문자 개수
		string part = s.substr(start, count); //start부터 count개의 문자로 서브스트링 만들기

		cout << part << endl;
		sum += stoi(part);
		start = findex + 1; //검색을 시작할 인덱스 전진시킴
	}
	cout << "숫자들의 합은" << sum << endl;
}