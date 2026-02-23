#include <stdio.h>

int main()
{
    char str[5][100];
    char ch;
    int cnt=0;
    int i,j;

    printf("5 word : ");
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }
    printf("alphabet : ");
    scanf(" %c",&ch);

    printf("======Result======\n");
    for (i=0;i<5;i++)
    {
        cnt=0;
        j=0;
        while(str[i][j]!='\0')
        {
            if (str[i][j] == ch)
                cnt++;
            j++;
        }
        printf("%s : %d\n",str[i],cnt);
    }

    return 0;
}