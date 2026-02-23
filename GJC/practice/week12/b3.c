#include <stdio.h>

int main()
{
    char str[] = "Merry Christmas";
    char ch;
    int i=0, cnt=0, cnt_2=0;

    printf("Type alphabet: ");
    scanf("%c",&ch);

    while(str[i]!='\0')
    {
        cnt_2++;
        if (str[i++] == ch)
            cnt++;
    }

    printf("str: %s\n",str);
    printf("# of %c: %d\n",ch,cnt);
    printf("# of str: %d\n",cnt_2);

    return 0;


}