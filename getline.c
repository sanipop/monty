#include "monty.h"
/**
 * a_getline - functin to read the line of an input.
 * @lineptr: A pointer to teh line to copy
 * @n: A counter of characters to copy
 * @stream: A pointer to the storage
 * Return: the byte of file to copy
 */


ssize_t a_getline(char **lineptr, size_t *n, FILE *stream)
 {
    size_t i;
    int c;
    i = 0;

    if (lineptr == NULL || n == NULL) {
        errno = EINVAL;
        return -1;
    }

    /*reassignig buffer*/
    if (*lineptr == NULL || *n == 0) {
        *n = 128;  /*Modify the byte size*/
        *lineptr = (char *)malloc(*n);
        if (*lineptr == NULL) {
            return -1;
        }
    }

    
    
    

    while ((c = fgetc(stream)) != EOF) {
        if (i >= *n - 1) {
            /*function to reallocate buffer*/
            size_t new_size = *n * 2;
            char *new_lineptr = (char *)realloc(*lineptr, new_size);
            if (new_lineptr == NULL) {
                return -1;
            }
            *lineptr = new_lineptr;
            *n = new_size;
        }

        (*lineptr)[i++] = (char)c;

        if (c == '\n') {
            break; /* the end point of read*/
        }
    }

    if (i == 0 && c == EOF) {
        return -1; /* No characters read, end of file reached*/
    }

    (*lineptr)[i] = '\0'; 

    return i;
}
