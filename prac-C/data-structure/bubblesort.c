#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int *array, int length);
void swap(int *array, int a, int b)
{
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

int main()
{
	int A[20] = {};
	int i;
	srand(time(NULL));
	
	printf("Random Array : ");
	for(i=0;i<20;i++){
		A[i] = rand()%99+1;
		printf("%d ",A[i]);
	}

	printf("\n");
	int length = 20;
	bubblesort(A, length);

	printf("Bubble-Sorted Array -> ");
	for(i=0;i<20;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}

void bubblesort(int *array, int length)
{
	int i,j;
	for (i=length;i>1;i--)
	{
		for(j=1;j<i;j++)
		{
			if (array[j-1] > array[j])
				swap(array, j-1, j);
		}
	}
	return;
}
