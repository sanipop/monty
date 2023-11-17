#include "monty.h"
/**
 * asanif_pall - a printer of the linked list
 * @head: the otp of the list
 * @counter: not part of the list
 * Return: it has a void return type    
 */
void asanif_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
