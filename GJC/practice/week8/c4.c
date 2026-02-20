#include <stdio.h>

void binary(int number);

int main(void)
{
	int decimal;

	printf("정수 0을 입력하면 프로그램이 종료합니다.\n");
	printf("양의 정수를 하나 입력하세요. >> ");
	
	while (1)
	{
		scanf("%d", &decimal);
		if (decimal <=0)
			break;
		
		printf("양의 정수 %7d의 2진수는 >> ", decimal);
		binary(decimal);

		printf("\n\n양의 정수를 하나 입력하세요. >> ");

	}
	return 0;
}

void binary(int number)
{
	int bin;

	if (number > 0)
	{
		bin = number %2;

		binary(number/2);
		printf("%d",bin);
	}
	return;
}


