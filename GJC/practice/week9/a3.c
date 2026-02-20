#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int score[10];
	int count = 0;
	int i;
	srand(time(NULL));

	printf("번호 - 점수\n");
	for (i=0;i<10;i++)
	{
		score[i] = rand()%51 + 50;
		printf("%3d  - %3d\n",i+1,score[i]);
	}

	printf("90점 이상인 학생번호 :");
	for (i=0;i<10;i++)
	{
		if (score[i]>=90)
			printf("%3d",i+1);
		if (score[i]>=80)
			count+=1;
	}
	printf("\n80점 이상인 학생 수는 %d명입니다.\n",count);

	return 0;
}

