#include <stdio.h>

int main()
{
	int score;
	char grade = 'F';
	printf("Type your score: ");
	scanf("%d",&score);

	if (score>=90)
	{
		grade = 'A';
	}
	if (score >= 80 && score <90)
	{
		grade = 'B';
	}

	if (score >= 70 && score <80)
	{
		grade = 'C';
	}

	printf("Your grade is %c\n", grade);

	return 0;
}

