#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore(); //'&' 뒤에 따라 오는 <Enter>키를 제거하기 위한 코드 !!!
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n'); //검색할 문자열 입력
	cout << "replace : ";
	getline(cin, r, '\n'); //대치할 문자열 입력
	int start = 0;
	while (true) {
		int findex = s.find(f, start); //start부터 문자열 f 검색
		if (findex == -1)break;
		s.replace(findex, f.length(), r); //findex부터 문자열 f의 길이만큼 문자열 r로 변경
		start = findex + r.length();
	}
	cout << s << endl;
}