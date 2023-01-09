#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
int _putchar(char c);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);

#endif
