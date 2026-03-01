#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int i;

    a = malloc(sizeof(int) * 8);
    for (i=0;i<10;i++) a[i] = i;

    for(i=0;i<10;i++)
        printf("a[%d] = %d\n",i,*(a+i));

    printf("pointer a  = %p\n",a);
    printf("pointer a address  = %p\n",&a);

    free(a);
    return 0;

}