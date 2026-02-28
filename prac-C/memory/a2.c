#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rows = 3, cols = 4;
	int **matrix;
	
	matrix =(int **)malloc(rows * sizeof(int *)); //행(rows)을 관리할 포인터 배열 할당
	
	for (int i=0;i<rows;i++){ //각 행마다 열(cols)만큼의 공간 할당
		matrix[i] = (int*) malloc(cols * sizeof(int));
	}

	matrix[1][2] = 50;
	printf("matrix[1][2] 값 : %d\n",matrix[1][2]);

	for(int i=0;i<rows;i++){
		free(matrix[i]); //각 행 해제
	}
	free(matrix); // 포인터 배열 해제

	return 0;
}
