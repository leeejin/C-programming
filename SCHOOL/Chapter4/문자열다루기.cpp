#include <iostream>
#include <string>
using namespace std;
int main()
{
	//문자열 비교
	string name = "Kitae";
	string alias = "Kito";
	int res = name.compare(alias);
	if (res == 0) cout << "두 문자열이 같다.";
	else if (res < 0) cout << name << " < " << alias << endl << name << "가" << alias << "보다 사전에서 먼저 나온다.";
	else cout << alias << " < " << name << endl << alias << "가" << name << "보다 사전에서 먼저 나온다.";
	//int compare(const string& str) : 문자열과 str을 비교하여 같으면 0. 사전 순으로 현재 문자열이 앞에 오면 음수.뒤에오면 양수 리턴

	//문자열 삽입
	string a("I love C++");
	a.insert(2, "really "); //2위치에 "really "삽입
	cout << a << endl;
	a.replace(2, 11, "study"); //2위치에 11개의 문자(really love)를 study로 대체
	cout << a << endl;
	cout << a.length() << endl;
	cout << a.size() << endl;
	cout << a.capacity() << endl;

	//문자열 삭제 : a.clear() : 문자열 완전 삭제
	cout << a.erase(0, 7) << endl;

	//서브스트링
	string b = "I love C++";
	string c = b.substr(2, 4); //b의 인덱스 2에서 4개의 문자 리턴. c="love"
	string d = b.substr(2); //b의 인덱스 2에서 끝까지 문자열 리턴. d="love C++"
	cout << c << endl;
	cout << d << endl;

	//문자열 검색
	string e = "I love love C++";
	int index = e.find("love"); //e에서 "love"검색. 인덱스 2리턴
	index = e.find("love", index + 1); //e의 인덱스 3부터 "love" 검색. 인덱스 7
	cout << index << endl;
	index = e.find("C#"); //e에서 "C#"을 발견 X. -1리턴
	cout << index << endl;
	index = e.find('v', 7); //e의 인덱스 7부터 'v'문자 검색. 인덱스 9리턴
	cout << index << endl;

	//문자열의 각 문자 다루기
	string f("I love C++");
	char ch1 = f.at(7); //문자열 f의 인덱스 7에 있는 문자 리턴. ch1 ='C';
	cout << ch1 << endl;
	char ch2 = f[7]; //f.at(7)과 동일한 표현
	cout << ch2 << endl;
	f[7] = 'D'; //f는 "I love D++"
	cout << f << endl;
	char ch3 = f.at(f.length() - 1); //ch3은 '+'
	cout << ch3 << endl;

	//문자열의 숫자변환, stoi()
	string year = "2014";
	int n = stoi(year);
	cout << n << endl;
	
	//문자 다루기
	string z = "hello";
	for (int i = 0; i < z.length(); i++)
		z[i] = toupper(z[i]);
	cout << z << endl;
	if (isdigit(z[0])) cout << "숫자"<<endl;
	else if (isalpha(z.at(0))) cout << "문자"<<endl;
}