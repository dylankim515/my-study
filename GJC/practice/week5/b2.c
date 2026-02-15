#include <stdio.h>

int main()
{
	char ch; int i;
	printf("ch : ");
	scanf("%c",&ch);

	printf("ch is %c\n",ch);

	for (i=0;i<6;i++){
		printf("%c + %d : %c\n",ch,i,ch +i);
	}
	
	return 0;
}

