#include <stdio.h>

int main(){
    int A[5] = {1,2,3,4,5};
    int i=0;
    int temp = 0;

    temp = A[2];
    A[2] = A[4];
    A[4] = temp;

    for(i=0;i<5;i++){
        printf("A[%d] = %d\n",i,A[i]);
    }
    return 0;
}