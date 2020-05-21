#include <iostream>
using namespace std;
class Container { // 통 하나를 나타내는 클래스
    int size; // 현재 저장 량, 최대 저장량은 10
public:
    Container() { size = 10; }
    void fill(); // 최대량(10)으로 채우기
    void consume(); // 1만큼 소비하기
    int getSize(); // 현재 크기 리턴
};
void Container::fill() {
    size = 10;
}
void Container::consume() {
    --size;
}
int Container::getSize() {
    return size;
}
class CoffeeVendingMachine { // 커피자판기를 표현하는 클래스 
    Container tong[3]; // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
    void fill(); // 3개의 통을 모두 10으로 채움
    void selectEspresso(); // 에스프레소를 선택한 경우, 커피 1, 물 1 소모
    void selectAmericano(); // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
    void selectsugarCoffee(); // 설탕커피를 선택한 경우, 커피 1, 물 2 소모, 설탕 1 소모
    void show(); // 현재 커피, 물 설탕의 잔량 출력
public:
    void run(); // 커피 자판기 작동
    int sw;
};
void CoffeeVendingMachine::fill() {
    for (int i = 0; i <3; ++i)
        tong[i].fill();
    sw = 0;
}
void CoffeeVendingMachine::selectEspresso() {
    for (int i = 0; i <3; ++i) { //원료가 충분한가 확인
        if (tong[i].getSize() == 0) {
            sw = 1;
            break;
        }
    }
    if (sw == 1) {
        cout << "원료가 부족합니다" << endl;
    }
    else {
        tong[0].consume(); tong[1].consume();
        sw = 0;
        cout << "에스프레소 드세요" << endl;
    }
}
void CoffeeVendingMachine::selectAmericano() {
    for (int i = 0; i <3; ++i) { //원료가 충분한가 확인
        if (tong[i].getSize() == 0) {
            sw = 1;
            break;
        }
    }
    if (sw == 1) {
        cout << "원료가 부족합니다" << endl;
    }
    else {
        tong[0].consume(); tong[1].consume(); tong[1].consume();
        sw = 0;
        cout << "아메리카노 드세요" << endl;
    }
}
void CoffeeVendingMachine::selectsugarCoffee() {
    for (int i = 0; i <3; ++i) { //원료가 충분한가 확인
        if (tong[i].getSize() == 0) {
            sw = 1;
            break;
        }
    }
    if (sw == 1) {
        cout << "원료가 부족합니다" << endl;
    }
    else {
        tong[0].consume(); tong[1].consume(); tong[1].consume(); tong[2].consume();
        sw = 0;
        cout << "설탕커피 드세요" << endl;
    }
}
void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getSize() << ",물 " << tong[1].getSize() << ",설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMachine::run() {
    int num;
    cout << "****** 커피자판기를 작동합니다. *****" << endl;
    for (;;) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
        cin >> num;
        switch (num)
        {
        case 1:
            selectEspresso();
            break;
        case 2:
            selectAmericano();
            break;
        case 3:
            selectsugarCoffee();
            break;
        case 4:
            show();
            break;
        case 5:
            fill();
            show();
            break;
        default:
            cout << "입력오류";
            break;
        }
    }
}
int main() {
    CoffeeVendingMachine p;
    p.run();
}