#include <stdio.h>

int main()
{
	int first =1 , second =1;
	int sum=0;
	int i=3;
	int N=0;

	printf("몇 번째의 항의 값을 구하고 싶으신가요?(단, N > 2) ");
	scanf("%d",&N);

	printf(" 1번째 값은 %2d입니다.\n 2번째 값은 %2d입니다.\n",first,second);

	while(i<=N)
	{

		sum = first +second;
		printf("%2d번째 값은 %2d입니다.\n",i,sum);
		i++;
		first=second;
		second= sum;
	}

	return 0;
}


