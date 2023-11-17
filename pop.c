#include "monty.h"
/**
 * asanif_pop - a function to print the head
 * @head: a pointer to the top of the list
 * @counter: a indexing of the list
 * Return: of void of no return
 */
void asanif_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		asanifree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
