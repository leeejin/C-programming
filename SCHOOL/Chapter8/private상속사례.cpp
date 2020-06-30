#include <iostream>
#include <string>
using namespace std;
class Base {
    int a;
protected:
    void setA(int a) { this->a = a; }
public:
    void showA() { cout << a; }
};
class Derived :private Base {
    int b;
protected:
    void setB(int b) { this->b = b; }
public:
    void showB() { cout << b; }
};
int main()
{
    Derived x;
    x.a = 5; //Derived클래스에 상속되지만 private 멤버이므로 접근 X.
    x.setA(10); //setA(),showA()는 private멤버로 변경되어 Derived 클래스에 상속되기
    x.showA(); //때문에 Derived 클래스 외부에서 접근 X.
    x.b = 10; //private멤버기때문에 Derived클래스외부에서 접근 X.
    x.setB(10); //protected멤버기때문에 main() 접근 X.
    x.showB(); //public멤버이기 때문에 누구나 접근 가능.
}