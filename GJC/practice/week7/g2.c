#include <stdio.h>

int main()
{
	int a,i,ch;
	int sum=0;
	int cnt=0;

	while(1)
	{
		ch = scanf("%d",&a);
		if (ch == EOF)
			break;

		sum+=a;
		cnt++;
	}

	printf("Average : %.2f\n",(float) sum/cnt);
	printf("Student : %d\n",cnt);

	return 0;
}

