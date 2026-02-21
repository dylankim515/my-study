#include <stdio.h>

int main() {
    int A[10] = {100,12,40,23,35,78,98,5,10,56};
    int min=500,min_index=0;

    for (int i=0;i<10;i++){
        if (A[i]<min){
            min = A[i];
            min_index=i;
        }
    }

    printf("The smallest number : %d(A[%d])\n",min,min_index);

    return 0;
}