#include <stdio.h>

int main()
{
	int num,buf,flag,k;

	printf("몇진법으로 변경하시겠습니까? ");
	scanf("%d",&k);
	printf("해당 진법으로 변경할 수를 입력해주세요 : ");
	scanf("%d",&num);
	buf=0;flag=1;
	while(num>0)
	{
		buf+= (num%k) * flag;
		num/=k;
		flag*=10;
	}

	printf("%d\n",buf);
	return 0;
}


	
