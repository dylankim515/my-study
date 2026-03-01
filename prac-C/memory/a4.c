#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int i;


    int *a=malloc(size * sizeof(int));
    for(i=0;i<size;i++) a[i] = size-i;
    for(i=0;i<size;i++) printf("a[%d] = %d\n",i,a[i]);

    int bonus_size;
    printf("How much additional size do you want? : ");
    scanf("%d",&bonus_size);
    a = realloc(a,(size+bonus_size) * sizeof(int));
    for(i=size;i<size + bonus_size;i++) a[i] = 5;
    for(i=0;i<size+bonus_size;i++) printf("a[%d] = %d\n",i,a[i]);
    free(a);
    
    return 0;
}