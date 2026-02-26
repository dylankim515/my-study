#include <stdio.h>

int sum_n(int n)
{
	int i, sum=0;
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	int num;
	printf("1이상의 정수를 입력하시오 : ");
	scanf("%d",&num);

	printf("%d\n",sum_n(num));

	return 0;
}

