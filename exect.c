#include "monty.h"
/**
 * asaniexecute - The main function of the code
 * @stack: A list of the stack format
 * @counter: An index of the list
 * @file: An adress to the flie
 * @content: the info to add .
 * Return: no return
 */
int asaniexecute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", asanif_push}, {"pall", asanif_pall}, {"pint", asanif_pint},
				{"pop", asanif_pop},
				{"swap", asanif_swap},
				{"add", asanif_add},
				{"nop", asanif_nop},
				{"sub", asanif_sub},
				{"div", asanif_div},
				{"mul", asanif_mul},
				{"mod", asanif_mod},
				{"pchar", asanif_pchar},
				{"pstr", asanif_pstr},
				{"rotl", asanif_rotl},
				{"rotr", asanif_rotr},
				{"queue", asanif_queue},
				{"stack", asanif_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		asanifree_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
