#include <iostream>
#include <string>
using namespace std;
class Point {
    int x, y;
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
};
class ColorPoint : public Point {
    string color;
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
};
void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();
}
int main()
{
    ColorPoint cp;
    ColorPoint* pDer; 
    Point* pBase = &cp; //업 캐스팅 : 파생클래스의 객체cp를 기본클래스의 포인터pBase로 가리키는 것
    pBase->set(3, 4);
    pBase->showPoint();
    pDer = (ColorPoint*)pBase; //다운 캐스팅 : 기본 클래스의 포인터가 가리키는 객체pBase를 파생 클래스의 포인터(ColorPoint *)로 가리키는 것
    pDer->setColor("Red");
    pDer->showColorPoint();
}