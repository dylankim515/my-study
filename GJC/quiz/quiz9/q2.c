#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10];
    int i,max=0;
    int cnt=0;

    srand(time(NULL));
    printf("Array : ");
    for (i=0;i<10;i++){
        arr[i] = rand()%10;
        printf("%d ",arr[i]);
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("\n");

    for (i=0;i<10;i++){
        if (arr[i] == max){
            cnt++;
        }
    }
    printf("%d has appeared %dtimes in the Array\n",max,cnt);
    return 0;
    
}