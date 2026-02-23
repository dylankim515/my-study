#include <stdio.h>

int main()
{
    char str[20];
    char word[4] = "yer";
    int i=0;
    int count =0;
    printf("문자열을 입력하세요 : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;i<18;i++)
    {
        if (str[i] == word[0] && str[i+1] == word[1] && str[i+2] == word[2])
        {
            count=1;
        }
    }

    if(count)
        printf("입력된 문자열에 %s가 포함되어 있습니다.\n",word);
    else
        printf("입력된 문자열에 %s가 포함되어 있지 않습니다.\n",word);

    return 0;

}