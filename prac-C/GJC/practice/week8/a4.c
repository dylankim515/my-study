#include <stdio.h>

int find_max (int max, int input)
{
	if (max < input)
		return input;
}
int main()
{
	int i,n,input;
	int max=0;
	printf("몇개의 수를 입력받겠습니까? ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		printf("자연수 %d : ",i);
		scanf("%d",&input);
		max = find_max(max, input);
	}
	printf("max : %d\n",max);
	return 0;
}


