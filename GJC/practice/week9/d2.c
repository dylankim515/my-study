#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int abs(int a){
    if (a>=0){
        return a;
    }
    else{
        return -a;
    }
}
int main()
{
    int ans[10]={1,3,9,5,4,1,7,2,6,8};
    int myans[10]={0};
    int i,sum=0;
    srand(time(NULL));

    printf("My answer : ");
    for (i=0;i<10;i++){
        scanf("%d",&myans[i]);

    }
    printf("Answer : ");
    for (i=0;i<10;i++){
        printf("%d ",ans[i]);
    }
    printf("\nDifference : \n");

    for (i=0;i<10;i++){
        if (i>=1){
            printf("+");
        }
        printf("%d",abs(myans[i]-ans[i]));
        sum+=abs(myans[i]-ans[i]);
    }
    printf("=%d\n",sum);
    return 0;
}