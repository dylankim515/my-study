#include <stdio.h>

int main()
{
	int a,b,i;

	printf("Enter a b : ");
	scanf("%d %d",&a,&b);

	i=1;

	while(1)
	{
		if (i%a ==0 && i%b==0)
		{
			break;
		}
		i++;
	}
	printf("%d and %d LCM : %d\n",a,b,i);

	return 0;
}

