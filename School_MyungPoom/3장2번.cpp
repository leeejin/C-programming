#include <iostream>
#include <string>
using namespace std;
class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m, day = d; }
	Date(string date);
	void show() { cout << year << "년" << month << "월" << day << "일"<<endl; }
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
Date::Date(string d) {
	year = stoi(d.substr(0, 4));
	month = stoi(d.substr(5, 7));
	day = stoi(d.substr(7, 10));
}
int main()
{
	Date birth(2014, 3, 20);
	Date Day("1945/8/15");
	Day.show();
	cout << birth.getYear() << ',' << birth.getMonth()<< ',' << birth.getDay() << endl;
}