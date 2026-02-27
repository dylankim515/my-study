#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionsort(int *array,int *sorted_array, int length);

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
	insertionsort(A, B, length);

	printf("Insertion-Sorted Array -> ");
	for(i=0;i<20;i++){
		printf("%d ",B[i]);
	}
	printf("\n");
	return 0;
}

void insertionsort(int *array, int *sorted_array, int length)
{
	int i,j;
	int k;
	sorted_array[0] = array[0];	
	for (i=1;i<length;i++)
	{
		j=i;
		while(j>0)
		{
			if (array[i] < sorted_array[j-1])
			{
				sorted_array[j] = sorted_array[j-1];
			}
			else
			{
				break;
			}
			j--;
		}
		sorted_array[j] = array[i];
	}
	return;
}
