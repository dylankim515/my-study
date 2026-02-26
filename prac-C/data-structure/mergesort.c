#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergesort(int *array, int* sorted_array, int length);

int main()
{
	int A[20] = {};
	int B[20] = {};
	int i;
	srand(time(NULL));
	
	printf("Random Array : ");
	for(i=0;i<20;i++){
		A[i] = rand()%99+1;
		printf("%d ",A[i]);
	}

	printf("\n");
	int length = 20;
	mergesort(A, B, length);

	printf("Merge Sorted Array -> ");
	for(i=0;i<20;i++){
		printf("%d ",B[i]);
	}
	printf("\n");
	return 0;
}


void mergesort(int *array, int *sorted_array, int length)
{
	if (length == 1)
	{
		return;
	}
	int new_length_1, new_length_2;
	int new_sorted_array[length+1]={};
	
	new_sorted_array[length] = 10000;
	new_length_1 = length/2;
	
	if (length%2 == 0)
		new_length_2=length/2;
	else
		new_length_2=length/2 + 1;
	
	int i,j,k;
	int new_array_1[new_length_1]={};
	int new_array_2[new_length_2]={};
	
	for (i=0;i<new_length_1;i++)
	{
		new_array_1[i] = array[i];
	}
	j=0;
	for(i=new_length_1;i<length;i++)
	{
		new_array_2[j]= array[i];
		j++;
	}
	
	// 수정된 병합 부분 (일부)
	mergesort(new_array_1, new_array_1, new_length_1); // 결과를 다시 자기 자신에게
	mergesort(new_array_2, new_array_2, new_length_2);

	i = 0; j = 0; k = 0;
	while (i < new_length_1 && j < new_length_2) { // &&로 변경
	    if (new_array_1[i] < new_array_2[j]) new_sorted_array[k++] = new_array_1[i++];
	    else new_sorted_array[k++] = new_array_2[j++];
		}
	// 남은 원소 처리 (매우 중요!)
	while (i < new_length_1) new_sorted_array[k++] = new_array_1[i++];
	while (j < new_length_2) new_sorted_array[k++] = new_array_2[j++];			
	
	for (i=0;i<length;i++)
	{
		sorted_array[i] = new_sorted_array[i];
	}





}
