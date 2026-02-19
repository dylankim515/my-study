#include <stdio.h>

int main()
{
	int a,i;

	int sum=0;

	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	printf("Average : %.2f\n",(float) sum/5);

	return 0;
}

