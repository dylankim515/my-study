#include <stdio.h>

int main()
{
	int num1 =1, num2=1;
	int sum1=0, sum2=0;

	for (num1=1;num1<=10;num1++){
		sum1+=num1;
	}

	while(num2<=10)
	{
		sum2+=num2;
		num2++;
	}
	printf("sum1 : %d\n",sum1);
	printf("sum2 : %d\n",sum2);

	return 0;
}

