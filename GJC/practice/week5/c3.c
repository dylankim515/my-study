#include <stdio.h>

int main(){
	int a,b,i;

	printf("최대공약수를 구할 두 수를 입력하세요 : ");
	scanf("%d %d",&a,&b);

	for (i=a;i>0;i--){
		if (a%i==0 && b%i==0){
			printf("두 수의 최대공약수는 %d입니다.\n",i);
			i=0;
		}
	}

	return 0;
}

