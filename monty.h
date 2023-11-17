#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - a structure of a doubled linked list
 * @n: the value passed to the  linked list
 * @prev: pointer to the previous value of the list
 * @next: the element to the forward of the list
 *
 * Description: a double linked list main structure
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: the argument to the  stack function
 * @file: the adress to the monty
 * @content: the line to be copied
 * @lifi: the operator to change file type
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - a structure that hold information of the list
 * @opcode: the code of the required operation
 * @f: the corresponding function of code
 *
 * Description: a data type with carious functions and various list
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
ssize_t a_getline(char **lineptr, size_t *n, FILE *stream);
char *asani_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t asanigetstdin(char **lineptr, int file);
char  *asaniclean_line(char *content);
void asanif_push(stack_t **head, unsigned int number);
void asanif_pall(stack_t **head, unsigned int number);
void asanif_pint(stack_t **head, unsigned int number);
int asaniexecute(char *content, stack_t **head, unsigned int counter, FILE *file);
void asanifree_stack(stack_t *head);
void asanif_pop(stack_t **head, unsigned int counter);
void asanif_swap(stack_t **head, unsigned int counter);
void asanif_add(stack_t **head, unsigned int counter);
void asanif_nop(stack_t **head, unsigned int counter);
void asanif_sub(stack_t **head, unsigned int counter);
void asanif_div(stack_t **head, unsigned int counter);
void asanif_mul(stack_t **head, unsigned int counter);
void asanif_mod(stack_t **head, unsigned int counter);
void asanif_pchar(stack_t **head, unsigned int counter);
void asanif_pstr(stack_t **head, unsigned int counter);
void asanif_rotl(stack_t **head, unsigned int counter);
void asanif_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void asaniaddqueue(stack_t **head, int n);
void asanif_queue(stack_t **head, unsigned int counter);
void asanif_stack(stack_t **head, unsigned int counter);
#endif
