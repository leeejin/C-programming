#include <stdio.h>
#define rate 0.07
#define investment 10000000
#define years 10
int main()
{
	int i;
	double total = investment;
	printf("연도 원리금\n");
	for(i=1; i<=years; i++)
	{
		total = total*(1+rate);
		printf("%2d %10.1f\n",i,total);
	}
	return 0;
}