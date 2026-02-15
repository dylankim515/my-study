#include <stdio.h>

int main()
{
	int num;

	printf("양의 정수를 입력하세요. : ");
	scanf("%d",&num);
	printf("---> 입력한 수 %d는(은) 5의 배수",num);

	if (num%5==0)
	{
		printf("입니다.\n");
	}
	else
	{
		printf("가 아닙니다.\n");
	}

	return 0;
}

