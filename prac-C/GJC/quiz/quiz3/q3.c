#include <stdio.h>

int main()
{
	int A, B, C;

	printf("A : ");
	scanf("%d",&A);
	printf("B : ");
	scanf("%d",&B);
	printf("V : ");
	scanf("%d",&C);

	printf("A bigger than B, A smaller than C : %d\n",A>B && A<C);
	printf("Is A factor of eighteen? : %d\n", 18%A == 0);

	return 0;
}

