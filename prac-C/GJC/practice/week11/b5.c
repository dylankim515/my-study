#include <stdio.h>

int main()
{
    int arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    int *pArr = arr[0];

    printf("%d \n",*pArr);

    printf("%d \n",*(++pArr));
    printf("%d \n",*(++pArr));
    
    printf("%d \n",*(pArr+1));
    printf("%d \n",*(pArr+2));
    printf("%d \n",*(pArr+3));

}