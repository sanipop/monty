#include "monty.h"
/**
* asanifree_stack - function to free the stack
* @head: the top of the stack
*/
void asanifree_stack(stack_t *head)
{
	stack_t *inter;

	inter = head;
	while (head)
	{
		inter = head->next;
		free(head);
		head = inter;
	}
}
