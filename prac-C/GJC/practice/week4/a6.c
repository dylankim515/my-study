#include <stdio.h>

int main()
{
	int num;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d",&num);

	printf("%d은(는) ",num);

	if (num%2==0)
	{
		printf("짝수");
	}
	else
	{
		printf("홀수");
	}

	printf("이면서, 3의배수");

	if (num%3==0)
	{
		printf("입니다.\n");
	}

	else
	{
		printf("가 아닙니다.\n");
	}

	return 0;
}

