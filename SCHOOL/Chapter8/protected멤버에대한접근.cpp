#include <iostream>
#include <string>
using namespace std;
class Point {
protected:
    int x, y;
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() { cout << "(" << x << ',' << y << ")" << endl; }
};
class ColorPoint:public Point {
    string color;
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
    bool equals(ColorPoint p);
};
void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();
}
bool ColorPoint::equals(ColorPoint p) {
    if (x == p.x && y == p.y && color == p.color)return true;
    else return false;
}
int main()
{
    Point p;
    p.set(2, 3);
    p.x = 5; //3
    p.y = 5; //4
    p.showPoint();
    ColorPoint cp;
    cp.x = 10; //5
    cp.y = 10; //6
    /* 3,4,5,6의 코드에서는 protected 멤버로 선언된 x,y를 접근하기 때문에 컴파일 오류가 발생
                       접근가능여부
    private멤버       protected멤버    public멤버
    멤버선언클래스     멤버선언클래스     다됨
                        파생클래스
    */
    cp.set(3, 4);
    cp.setColor("Red");
    ColorPoint cp2;
    cp2.set(3, 4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2)) ? "true" : "false");
}