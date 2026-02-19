#include <stdio.h>

int main()
{
	int i,j,flag,N;

	printf("숫자를 입력해주세요! ");
	scanf("%d",&N);
	printf("%d 보다 작은 소수 :\n",N);

	for (i=2;i<=N;i++)
	{
		flag=1;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}


