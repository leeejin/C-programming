#include <iostream>
using namespace std;
class CoffeeMachine
{
	private:
		int coffee,water,sugar;
	public:
		CoffeeMachine(int coff,int wat,int sug);
		void drinkEspresso();
		void drinkAmericano();
		void drinkSugarCoffee();
		void fill();
		void show();	
};
CoffeeMachine::CoffeeMachine(int coff,int wat,int sug)
{
	coffee = coff;
	water = wat;
	sugar = sug;
}
void CoffeeMachine::drinkEspresso()
{
	coffee--;
	water--;
}
void CoffeeMachine::drinkAmericano()
{
	coffee--;
	water= water-2;
}
void CoffeeMachine::drinkSugarCoffee()
{
	coffee--;
	water=water-2;
	sugar--;
}
void CoffeeMachine::fill()
{
	coffee=10;
	water=10;
	sugar=10;
}
void CoffeeMachine::show()
{
	cout<<"커피 머신 상태, 커피:"<<coffee<<"\t물:"<<water<<"\t설탕:"<<sugar<<endl;
}
int main()
{
 	CoffeeMachine java(5,10,3);//커피량:5, 물량:10,설탕:6
	 java.drinkEspresso(); //커피 1,물 1 소비 
	 java.show();
	 java.drinkAmericano();
	 java.show();
	 java.drinkSugarCoffee();
	 java.show();
	 java.fill();
	 java.show();
	return 0;
}