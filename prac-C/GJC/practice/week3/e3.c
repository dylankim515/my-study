#include <stdio.h>

int main()
{

	int num;

	printf("Enter the integer 1~10 : ");
	scanf("%d",&num);

	printf("10의 약수인가? %d\n", (10%num==0));
	printf("8의 약수인가? %d\n", (8%num==0));
	printf("10과 8의 공약수인가? %d\n", (8%num==0) && (10%num==0));

	return 0;
	}

