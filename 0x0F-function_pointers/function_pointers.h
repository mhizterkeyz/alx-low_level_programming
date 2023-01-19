#ifndef HEADER_FILE
#define HEADER_FILE

void _putchar(char);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, unsigned int size, void (*action)(int));

#endif
