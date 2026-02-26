#include <stdio.h>

int main()
{
	int score;
	char grade = 'F';
	printf("Type your score: ");
	scanf("%d",&score);

	if (score>=60)
	{
		printf("Score %d is Pass\n", score);
	}

	return 0;
}

