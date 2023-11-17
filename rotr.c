#include "monty.h"
/**
 *asanif_rotr- move element at the top to the buttom
 *@head: the top of the list
 *@counter: indexing of the list
 *Return: void of no return
 */
void asanif_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
