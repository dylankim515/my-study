#include <stdio.h>

int main()
{
	float score; int num;
	score=0;

	printf("math score : ");
	scanf("%d",&num);
	score +=num;
	
	printf("english score : ");
	scanf("%d",&num);
	score +=num;
	
	printf("science score : ");
	scanf("%d",&num);
	score +=num;

	printf("programming score : ");
	scanf("%d",&num);
	score +=num;

	score = score/4.0;
	
	printf("Your average score is %f\n", score);

	if (score>=90)
	{
		printf("Honor student!\n");
	}
	else if(score<30)
	{
		printf("Cheer up!\n");
	}


	return 0;
}

