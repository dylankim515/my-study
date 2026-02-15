#include <stdio.h>

int main(void)
{
	int point = 0;

	printf("Enter your programming score --> ");
	scanf("%d",&point);

	printf("Your programming grade is ");

	if (point>=90)
	{
		printf("A\n");
	}
	else if (point>=80)
	{
		printf("B\n");
	}
	else if (point >=70)
	{
		printf("C\n");
	}
	else if (point>= 60)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

	return 0;
}

