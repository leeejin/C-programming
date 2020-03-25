#include <iostream>
using namespace std;
typedef void (*SYSTEM_FUNC)();
void ForWin9();
void ForWinNT();
bool IsWin9();
void ImportantFun(SYSTEM_FUNC pfn);
int main()
{
	SYSTEM_FUNC pfn;
	if(IsWin9())
	pfn = &ForWin9;
	else
	pfn = &ForWinNT;
	ImportantFun(pfn);
	return 0;
}
void ForWin9()
{
	cout<<"Windows 9x 용 함수 호출 \n";
}
void ForWinNT()
{
	cout<<"Windows NT 용 함수가 호출됨\n";
}
bool IsWin9()
{
	return false;
}
void ImportantFun(SYSTEM_FUNC pfn)
{
	(*pfn)();
	
	(*pfn)();
}