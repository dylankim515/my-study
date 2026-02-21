#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5};
    int i,n;

    printf("n = ");
    scanf("%d",&n);

    for (i=4;i>=n;i--){
        arr[i+1]=arr[i];
    }
    arr[n] = 6;

    for (i=0;i<6;i++){
        printf("%2d",arr[i]);
    }
    printf("\n");
    return 0;
}