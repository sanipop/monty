#include "monty.h"
/**
 * asanif_pint - a function to print hte top of the list
 * @head: the top of the list
 * @counter: indexing of the list
 * Return: a voiud of no return
 */
void asanif_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		asanifree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
