#include <iostream>
using namespace std;
#include <string>
int main() {
    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
    string text;
    for (;;) {
        cout << ">>";
        getline(cin, text);
        if (text == "exit") break;
        for (int i = text.length() - 1; i >= 0; --i)
            cout << text[i];
        cout << endl;
    }
}