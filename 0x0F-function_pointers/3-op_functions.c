#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - addition
  * @a: sum1
  * @b: sum2
  * Return: result
  */
int op_add(int a, int b)
{
return (a + b);
}
/**
  * op_sub - subtraction
  * @a: ...
  * @b: ...
  *
  * Return: Nothing.
  */
int op_sub(int a, int b)
{
return (a - b);
}
/**
  * op_mul - Multiplication
  * @a: mul 1
  * @b: mul 2
  *
  * Return: Nothing.
  */
int op_mul(int a, int b)
{
return (a * b);
}
/**
  * op_div - division
  * @a: ...
  * @b: ...
  * Return: Nothing.
  */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
  * op_mod - modulo
  * @a: ...
  * @b: ...
  *
  * Return: Nothing.
  */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
