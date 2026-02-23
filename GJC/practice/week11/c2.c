#include <stdio.h>

int main()
{
    int arr[3] = {0,1,2};
    int *ptr = arr;

    printf("%u, %u, %u\n",ptr,ptr+1,ptr+2);
    printf("%u, %u, %u\n",arr,arr+1,arr+2);
    printf("%u, %u, %u\n",&arr[0],&arr[1],&arr[2]);

    printf("%d, %d, %d\n",ptr[0],ptr[1],ptr[1]);
    printf("%d, %d, %d\n",arr[0],arr[1],arr[2]);
    printf("%d, %d, %d\n",*ptr,*(ptr+1),*(ptr+2));

    return 0;

}