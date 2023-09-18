#include "main.h"

/**
 * swap_int - take in two variable integers and swaps them
 * @author Anisah
 * @a: swaps and store adress of b
 * @b: swaps and stores address os a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
