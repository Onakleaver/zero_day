#include "main.h"

/**
  * swap_int - swaps values of ints
  * @a: first variable
  * @b: second variable
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
