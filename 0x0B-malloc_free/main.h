#ifndef MAIN_H
#define MAIN_H
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
char **strtow(char *str);
int num_words(char *str);
int len(char *str);


#endif /* MAIN_H */
