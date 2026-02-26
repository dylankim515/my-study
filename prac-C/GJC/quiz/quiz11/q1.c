#include <stdio.h>

int main()
{
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = A;
    int i,idx;

    printf("0 1 2 3 4 5 6 7 8 9\nEnter the index : ");
    scanf("%d",&idx);

    printf("\nAfter incrementing the pointer:\n");
    for (i=idx;i<10;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;

}