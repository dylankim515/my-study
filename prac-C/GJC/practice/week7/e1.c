#include <stdio.h>

int main()
{
	int i,num;

	printf("이진수로 변경할 수를 입력해주세요. : ");
	scanf("%d",&num);
	
	int buf=0,flag=1;
	while (num>0)
	{

		buf+=(num%2) * flag;
		num/=2;
		flag*=10;
	}
	printf("%d\n",buf);
	return 0;
}

