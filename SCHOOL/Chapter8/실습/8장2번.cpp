#include <iostream>
#include <string>
using namespace std;
class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle:public Circle {
    string s;
public:
    void setS(string s) { this->s = s; }
    string getS() { return s; }
};
int main()
{
    int radius;
    string s;
    NamedCircle pizza[5];
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ">> ";
        cin >> radius;
        getline(cin, s);
        pizza[i].setRadius(radius);
        pizza[i].setS(s);
    }
    double max = pizza[0].getArea();
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < pizza[i].getArea()) { max = pizza[i].getArea(); index = i; }
        
    }
    cout << "가장 면적이 큰 피자는" << pizza[index].getS() << "입니다." << endl;
}