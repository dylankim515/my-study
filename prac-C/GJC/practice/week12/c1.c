#include <stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    printf("str1 : ");
    scanf("%s",str1);
    while(getchar() !='\n');

    printf("str2 : ");
    gets(str2);

    printf("===Result===\n");
    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);

    return 0;

}