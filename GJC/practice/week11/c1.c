#include <stdio.h>

int main()
{
    int numArr[5] = {10,20,30,40,50};
    int *numPtrA, *numPtrB,*numPtrC;

    numPtrA = numArr;
    numPtrB = numArr + 1;
    numPtrC = numArr + 2;

    printf("%d (%u)\n", *numPtrA,numPtrA);
    printf("%d (%u)\n", *numPtrB,numPtrB);
    printf("%d (%u)\n", *numPtrC,numPtrC);

    return 0;

}