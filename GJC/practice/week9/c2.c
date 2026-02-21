#include <stdio.h>

int main() {
    int A[10] = {100,12,40,23,35,78,98,5,10,56};
    int min=500,min_index=0;
    int sec_min_index=0;

    for (int i=0;i<10;i++){
        if (A[i]<min){
            sec_min_index = min_index;
            min = A[i];
            min_index=i;
        }
    }

    printf("The smallest number : %d(A[%d])\n",min,min_index);
    printf("The second smallest number : %d(A[%d])\n", A[sec_min_index],sec_min_index);
    return 0;
}