#include "monty.h"
/**
 * asanif_queue - a function of printing
 * @head: the top of the list
 * @counter: an indexing operation
 * Return: void return type
 */
void asanif_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * asaniaddqueue - Function to add element to the end of the list
 * @n: the value to add
 * @head: the top of the list
 * Return: void of no return 
 */
void asaniaddqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
