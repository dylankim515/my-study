#include <stdio.h>

int main()
{
	int a,b,gcm;

	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	int i;
	for (i=1;i<=100;i++)
	{
		if (i%a==0 && i%b==0)
		{
			gcm =i;
		}
	}

	printf("GCM is %d\n",gcm);

	return 0;
}

