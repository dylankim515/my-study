#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int i=0,cnt=0;

    while(str[i++]!='\0')
    {
        cnt+=1;
    }
    printf("입력된 문자열은 모두%d개 입니다.\n",cnt);

    return 0;
}