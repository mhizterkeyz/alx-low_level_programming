#include <stdlib.h>
#include <strings.h>
#include "3-calc.h"

/**
 * get_op_func - does something
 * @s: param
 */
int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
      {"+", op_add},
      {"-", op_sub},
      {"*", op_mul},
      {"/", op_div},
      {"%", op_mod}};
  int i = 0;

  while (i < 5)
  {
    if (strcmp(s, ops[i].op) == 0)
    {
      return (ops[i].f);
    }
    i += 1;
  }
  return (NULL);
}
