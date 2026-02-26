#include <stdio.h>

int main()
	{
		int i,j,n;
		int count=0;
		printf("주사위 합 : ");
		scanf("%d",&n);

		for (i=1;i<=6;i++)
		{
			for (j=1;j<=6;j++)
			{
				if (i+j == n)
				{
					count++;
				}
			}
		}

		printf("확률 : %.2f%%\n",(float) count*100 / 36);
		return 0;
	}

