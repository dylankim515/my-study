#include <stdio.h>

int main()
{
    char str1[][10] = {"string1","string2","string3"};
    char str2[3][10];
    int i,j;
    printf("문자열 3개를 입력 : ");
    for (i=0;i<3;i++)
    {
        scanf("%s",str2[i]);
    }

    for (i=0;i<3;i++)
    {
        j=0;
        while(j<10 && str1[i][j]!='\0')
        {
            printf("%c", str1[i][j]);
            j++;
        }
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        j=0;
        while(j<10 && str2[i][j]!='\0')
        {
            printf("%c", str2[i][j]);
            j++;
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
        printf("%s\n",str1[i]);
    for(i=0;i<3;i++)
        printf("%s\n",str2[i]);

    return 0;
}