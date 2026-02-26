#include <stdio.h>
void timeconv(int totalsec, int *hour, int *min, int *sec)
{
    *hour = totalsec / 3600;
    *min = (totalsec%3600) / 60;
    *sec = (totalsec%3600) % 60;
}

int main()
{
    int totalsec,a,b,c;

    printf("Type time to convert: ");
    scanf("%d",&totalsec);

    timeconv(totalsec,&a,&b,&c);
    printf("%dseconds is %dhours %dmins %dsecs\n",totalsec,a,b,c);
    return 0;
}