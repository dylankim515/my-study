#include <stdio.h>

int main()
{
	int score;

	printf("Type your score: ");
	scanf("%d", &score);

	printf("Your score is %d\n",score);

	if (score > 95 && score<=100)
	{
		printf("Your grade is A+\nGreat job!!!\n");
	}

	return 0;
}

