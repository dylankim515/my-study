#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10];
    int i,num;
    int num_idx=100;

    srand(time(NULL));
    printf("Array : ");

    for (i=0;i<10;i++){
        arr[i] = rand()%10;
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    printf("Enter number : ");
    scanf("%d",&num);

    for (i=0;i<10;i++){
        if (arr[i] == num){
            num_idx = i;
        }
    }

    if (num_idx==100){
        printf("Element %d not found in the array\n",num);
    }
    else
    {
        printf("Element %d found at index %d\n",num,num_idx);
    }
    return 0;
    
}


