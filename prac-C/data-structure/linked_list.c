#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

int main()
{
	struct Node *head = (struct Node *)malloc (sizeof(struct Node));
	head -> data = 10;
	head -> next = NULL;

	struct Node *second = (struct Node *)malloc(sizeof(struct Node));
	second -> data = 20;
	second -> next = NULL;
	head -> next = second;//첫번째 노드가 두번째를 가리킴//
	
	struct Node *curr = head;
	while(curr !=NULL)
	{
		printf("노드 데이터 : %d\n", curr-> data);
		curr = curr->next;
	}

	free(second);
	free(head);

	return 0;
}
