#include <stdio.h>

int main()
{
	int total, a, b, c;

	total = 3700;
	a = total / 1000;
	total = total - a*1000;
	b = total / 500;
	total = total - b * 500;
	c = total / 100;
	total = total+ a*1000 + b*500;

	printf("%d원은 1000원 %d개, 500원 %d개, 100원 %d개로 바꿀 수 있다.\n",total,a,b,c);

	return 0;
}


	


