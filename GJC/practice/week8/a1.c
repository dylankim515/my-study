#include <stdio.h>

int sum (int a, int b);
void print2022(void);

int main()
{
	int a=3, b=4;
	print2022();
	printf("%3d + %3d = %3d\n",a,b,sum(a,b));

	return 0;
}

void print2022(void)
{
	printf("2022 공학정보처리 화이팅 \n");
}

int sum(int a, int b)
{
	return a+b;
}

