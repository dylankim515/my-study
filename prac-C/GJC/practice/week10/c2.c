#include <stdio.h>

void swap(int A[5], int n, int m){
    int temp;
    
    if (n<5 && m<5 && n>=0 && m>=0){
        temp = A[n];
        A[n] = A[m];
        A[m] = temp;
    }
    else {
        printf("ERROR: index n or m is out of array A.\n");
    }
}

int main(){
    int A[5] = {1,2,3,4,5}; int i;

    swap(A,2,4);

    for(i=0;i<5;i++){
        printf("A[%d] = %d\n",i,A[i]);
    }
    return 0;
}