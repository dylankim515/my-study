#include <stdio.h>

int main()
{
	int num;

	int i,j;

	printf("숫자 입력 : ");
	scanf("%d",&num);

	for(i=1;i<num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

