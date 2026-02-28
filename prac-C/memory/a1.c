#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int *arr;


	printf("입력할 숫자의 개수를 입력하세요: ");
	scanf("%d",&n);

	arr = (int *)malloc(n * sizeof(int));

	if (arr == NULL)
	{
		printf("메모리 할당에 실패했습니다.\n");
		return 1;
	}

	for (int i=0;i<n;i++)
	{
		arr[i] = i+1;
		printf("arr[%d] = %d\n", i , arr[i]);
	}

	free(arr);
	printf("메모리가 해제되었습니다.\n");

	return 0;
}

