#include <stdio.h>

int main()
{
    int A[10] = {12,64,33,24,85,36,75,58,93,45};
    int i=0,x=0,y=0;
    int index = 0;
    int min=100,temp=0;

    for (x=0;x<10;x++){
        min = A[x];
        index = x;

        for (y=x;y<10;y++){
            if (min>A[y]){
                index=y;
                min = A[y];
            }
        }

        //swap part//
        temp = A[index];
        A[index]=A[x];
        A[x]=temp;

    }
    for (i=0;i<10;i++){
        printf("A[%d] = %d\n",i,A[i]);
    }
    return 0;
}