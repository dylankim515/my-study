#include <stdio.h>

int sum_3(int a, int b, int c)
{
	return a+b+c;
}

int mult_3(int a, int b, int c)
{
	return a*b*c;
}

int main()
{
	int a,b,c;
	printf("세 수를 입력하세요 : ");
	scanf("%d %d %d",&a,&b,&c);

	printf("세수의 합은 : %d\n",sum_3(a,b,c));
	printf("세수의 곱은 : %d\n",mult_3(a,b,c));

	return 0;
}

