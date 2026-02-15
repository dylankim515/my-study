#include <stdio.h>

int main()
{
	int a,b;

	printf("두 정수를 입력하세요 : ");
	scanf("%d %d",&a,&b);

	int i,sum=0;
	

	printf("두수의 공약수 : ");
	for(i=1;i<=a;i++)
	{
		if (a%i==0 && b%i==0)
		{
			printf("%d ",i);
			sum+=1;
		}
		
	}
	printf("\n%d, %d의 공약수의 개수 : %d\n",a,b,sum);
	return 0;
}

