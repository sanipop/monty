#include "monty.h"
/**
 * asanif_pchar - A function for printing a character from the linked list,
 * @head: The top of the list
 * @counter: index operation of the list
 * Return: it return a value of void
 */
void asanif_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		asanifree_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		asanifree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
