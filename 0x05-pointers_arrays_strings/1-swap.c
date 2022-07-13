#include "main.h"
/** swap_int - swaping variable values
 * @a: first pointer
 * @b: second pointer
 * Return: void
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;

}
