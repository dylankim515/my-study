#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void powercopyarray (int A[], int B[], int N){
    int i;
    for (i=0;i<N;i++){
        B[i] = A[i] * A[i];
    }
}

int main(){
    int i;
    int A[10], B[10];
    srand(time(NULL));
    for (i=0;i<10;i++){
        A[i] = rand()%10+1;
    }
    powercopyarray(A,B,10);
    for (i=0;i<10;i++){
       printf("A[%d] = %3d   B[%d] = %3d\n",i,A[i],i,B[i]);
    }
    return 0;
}