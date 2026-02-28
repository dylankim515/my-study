#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct
{
	int *collection;
	int capacity; //how much memory to allocate
	int size; // how many int's in the array

} Stack;

Stack *create_stack(int capacity);
void destroy_stack (Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop(Stack *stack, int *item);
bool push(Stack *stack, int item);
bool peek(Stack *stack, int *item);

int main()
{
	Stack *stack = create_stack(5);
	int a;

	if (stack == NULL)
	{
		printf("Error creating stack\n");
		return 1;
	}

	if (is_empty(stack)) printf("Stack is empty\n");
	
	push(stack,2);
	printf("Stack size: %d\n",stack->size);
	push(stack,3);
	push(stack,5);
	printf("Stack size: %d\n",stack->size);
	
	pop(stack,&a);
	printf("Popped item: %d\n",a);
	printf("Stack size: %d\n",stack->size);

	destroy_stack(stack);

	return 0;
}


Stack *create_stack(int capacity)
{
	if (capacity <= 0)
		return NULL;

	Stack *stack = malloc(sizeof(Stack));
	if (stack == NULL) return NULL;

	stack-> collection = malloc(sizeof(int) * capacity);
	if (stack->collection == NULL)
	{
		free(stack);
		return NULL;
	}
	stack -> capacity = capacity;
	stack -> size = 0;

	return stack;
}

	
void destroy_stack (Stack *stack)
{
	free(stack -> collection);
	free(stack);
}

bool is_full(Stack *stack)
{
	return stack -> capacity == stack -> size;
}

bool is_empty(Stack *stack)
{
	return stack -> size == 0;
}

bool push(Stack *stack, int item)
{
	if (is_full(stack)) return false;

	stack ->collection[stack->size] = item;
	stack->size++;

	return true;
}

bool pop(Stack *stack, int *item)
{
	if (is_empty(stack)) return false;

	*item = stack->collection[stack->size-1];
	stack->size--;
	return true;
}


bool peek(Stack *stack,int *item)
{
	if (is_empty(stack) == true) return false;
	*item = stack->collection[stack->size-1];
	

	return true;
}

