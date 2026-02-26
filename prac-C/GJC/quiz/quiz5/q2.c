#include <stdio.h>

int main()
{
	int a,b,i;

	printf("Enter range a - b : ");
	scanf("%d %d",&a,&b);
	
	int sum=0;
	i=a;

	while(i<=b)
	{
		if (i%3==0 && i%2 !=0)
		{
			printf("%d\n",i);
			sum+=i;
		}
		i++;
	}
	
	printf("sum : %d\n",sum);

	return 0;
}



