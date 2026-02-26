#include <stdio.h>

int main()
{
	int i;
	int score[10] = {0};

	score[2] = 3;
	score[3] = 7;
	score[7] = 10;
	score[9] = 20;

	for (i=0;i<10;i++)
	{
		printf("score[%d] = %d\n",i,score[i]);

	}

	return 0;
}


