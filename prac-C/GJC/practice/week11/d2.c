#include <stdio.h>

void swap1(int x, int y);
void swap2(int *x, int *y);

int main()
{
    int a,b;
    a=10;b=5;
    printf("a : %d, b : %d\n",a,b);
    printf("swap1 (call by value)\n");
    swap1(a,b);
    printf("a : %d, b : %d\n",a,b);
    printf("swap2 (call by address)\n");
    swap2(&a,&b);
    printf("a : %d, b : %d\n",a,b);
    
    return 0;
}

void swap1(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x =*y;
    *y = temp;
}