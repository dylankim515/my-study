#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num,seed, answer;
	seed=time(NULL);
	srand(seed);

	answer = rand()%100+1;

	int flag=0;
	int i;
	for (i=0;i<6;i++)
	{
		printf("숫자를 입력하시오. : ");
		scanf("%d",&num);

		if (num == answer)
		{
			flag=1;
			printf("Correct!\n");
			break;
		}
		else if (num > answer)
		{
			printf("DOWN! (남은 기회 : %d번)\n", 5-i);
		}
		else
		{
			printf("UP! (남은 기회 : %d번)\n", 5-i);
		}
	}

	if (flag==0)
	{
		printf("You Lose! (정답 : %d)\n",answer);
	}

	return 0;
}




