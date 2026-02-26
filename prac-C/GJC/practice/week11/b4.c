#include <stdio.h>

void sum(int a, int *b)
{
    int i;
    for (i=1;i<=a;i++)
    {
        *b =*b +i;
    }
}
int main()
{
    int n,k=0;

    printf("n: ");
    scanf("%d",&n);

    sum(n,&k);
    printf("sum of 1~%d: %d\n",n,k);

    return 0;
    
}