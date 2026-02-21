#include <stdio.h>

void copyarray(int A[], int B[], int N){
    int i;
    for (i=0;i<N;i++){
        B[i] = A[i];
    }
}

int main(){
    int A[10];
    int B[10];
    int i, N=10;
    for (i=0;i<10;i++){
        A[i] = i*i;
    }
    copyarray(A,B,N);
    for (i=0;i<10;i++){
        printf("A[%d] = %3d   B[%d] = %3d\n",i,A[i],i,B[i]);
    }
    return 0;
}