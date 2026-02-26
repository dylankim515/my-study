#include <stdio.h>

int main()
{
	int i,j;
	int k;
	printf("k를 입력하세요 : ");
	scanf("%d",&k);

	for (i=1;i<=k;i++)
	{
		for (j=0;j<k;j++)
		{
			printf("%3d",i+j);
		}
		printf("\n");
	}

	return 0;
}


