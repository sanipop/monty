#include "monty.h"
/**
 * asanif_pstr - A functin tha print list,
 * @head: the top of the list
 * @counter: An indexing of  the list
 * Return: it does not return anything
 */
void asanif_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
