#include <iostream>
using namespace std;
class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void set(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};
int main()
{
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;
	p->set(255, 0, 0);
	p[0].set(255, 0, 0);
	p[1].set(0, 255, 0);
	p[2].set(0, 0, 255);
		for (int i = 0; i < 3; i++)
			p[i].show();
	return 0;
}