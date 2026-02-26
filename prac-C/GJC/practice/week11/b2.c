#include <stdio.h>

int main(void)
{
    int n=10;
    int *p1 = &n; //int *p1;p1 = &n;와같은 의미

    printf("n 값은 = %d \n",(*p1)++);
    *p1 = *p1 +2;
    printf("n 값은 = %d \n",*p1);
    *p1 = n+2;
    printf("n 값은 = %d \n",n);
    return 0;

}