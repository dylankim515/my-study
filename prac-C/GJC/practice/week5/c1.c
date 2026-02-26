#include <stdio.h>

int main(){
	int i;

	for(i=1;i<=12;i++){
		printf("*****\n");
		if(i%3==0){
			printf("\n");
		}
	}
	return 0;
}

