#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[10];
    cout << "문자열 입력>>";
    cin >> a;
    for (int i = 0; i <= strlen(a); i++)
    {
        for (int j = 0; j < i; j++)
            cout << a[j];
        cout << endl;
    }
}