#include <stdio.h>

int main(){
    int A[10] = {1,3,9,8,3,6,2,7,1,4};
    int i, B[10]={};
    int count=0;

    printf("자신의 숫자를 입력하시오 ");

    for (i=0;i<10;i++){
        scanf("%d",&B[i]);
    }
    
    printf("배열에 저장된 숫자들은   ");

    for (i=0;i<10;i++){
        printf("%d ",B[i]);
        if (A[i] == B[i]){
            count++;
        }

    }
    printf("\n기존의 식별번호와 본인의 답변번호의 유사성은 %.2f\n",(float) count / 10);

    return 0;

}

