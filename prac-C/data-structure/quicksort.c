#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int *array, int low, int high);
void swap(int *array, int a, int b);

int main()
{
	int A[10] = {};
	int i;
	srand(time(NULL));
	
	printf("Random Array : ");
	for(i=0;i<10;i++){
		A[i] = rand()%50+1;
		printf("%d ",A[i]);
	}

	printf("\n");
	int start=0, finish=9;
	quicksort(A, start, finish);

	printf("Quicksorted Array -> ");
	for(i=0;i<10;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}

void swap(int *array, int a, int b)
{
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

void quicksort(int *array, int low, int high)
{
	if (low>=high)
		return;

	int mid = low + (high-low)/2;
	swap(array,high,mid);
	
	int pivot_index = high;
	int i,j;
	j=high-1;
	i=low;
	while (i<=j)
	{
		while (i < high && array[i] < array[pivot_index])
		{
			i++;
		}
		while (j>low && array[j] > array[pivot_index])
		{
			j--;
		}
		if (i>=j)
		{
			break;
		}
		else
		{
			swap(array,i,j);
			i++;
			j--;
		}
	}

	swap(array,i,pivot_index);
	pivot_index=i;
	quicksort(array, low, pivot_index-1);
	quicksort(array, pivot_index+1, high);
	
	return;
}
	



