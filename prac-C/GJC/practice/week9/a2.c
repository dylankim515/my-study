#include <stdio.h>

int main()
{
	int A[5];
	int i;

	printf("A : ");
	for (i=0;i<5;i++)
		scanf("%d",&A[i]);

	for (i=0;i<5;i++)
		printf("%d\t",A[i]);
	printf("\n");

}
