#include <stdio.h>

int main()
{
	int i,j;
	int k;
	printf("k를 입력하세요 : ");
	scanf("%d",&k);

	for (i=1;i<=k;i++)
	{
		for (j=i;j<=k*k;j+=k)
		{
			printf("%4d",j);
		}
		printf("\n");
	}

	return 0;
}

