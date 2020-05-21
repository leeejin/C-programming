#include <iostream>
using namespace std;
#include <string>
int main() {
    string text;
    int aNum=0;
    int index = 0;
    cout << "문자열 입력>>";
    getline(cin, text);
    for (int i = index; i < text.length(); ++i) {
        int n = text.find('a', index);
        if (n>index) {
            ++aNum;
            index = n+1;
        }
    }
    cout << "문자 a는 " << aNum << "개 있습니다" << endl;
}