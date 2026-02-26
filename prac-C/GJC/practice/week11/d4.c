#include <stdio.h>
void calc(int a, int b, int *sum, int *sub, int *mult, int *div);

int main()
{
    int a,b, cast1, cast2, cast3, cast4;
    int *sum = &cast1;
    int *sub  = &cast2;
    int *mult = &cast3;
    int *div = &cast4;

    printf("Enter two integers : ");
    scanf("%d %d",&a,&b);
    calc(a,b,&cast1, &cast2, &cast3,&cast4);
    printf("sum : %d\n",*sum);
    printf("sub : %d\n",*sub);
    printf("mult : %d\n",*mult);
    printf("div : %d\n",*div);
    return 0;

}

void calc(int a, int b, int *sum, int *sub, int *mult, int *div)
{
    *sum = a + b;
    *sub = a-b;
    *mult = a*b;
    *div = a/b;
}