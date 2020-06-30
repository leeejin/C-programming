#include <iostream>
#include <string>
using namespace std;
class Color {
	int r, g, b;
public:
	Color() { r = g = b = 0; }
	Color(int r, int g, int b) { this->r = r; this->g = g; this->b = b; }
	void setColor(int r, int g, int b) { this->r = r; this->g = g; this->b = b; }
	void show() { cout << r << ' ' << g << ' ' << b << endl; }
	friend Color operator+(Color a,Color b) {
		Color tmp;
		tmp.r = b.r + a.r;
		tmp.g = b.r + a.g;
		tmp.b = b.b + a.b;
		return tmp;
	}
	friend bool operator==(Color a,Color b) {
		if (b.r== a.r && b.g== a.g && b.b == a.b)return true;
		else return false;
	}

};
int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)cout << "보라색 맞음";
	else cout << "보라색 아님";
}