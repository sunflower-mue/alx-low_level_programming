#include "main.h"

/**
* infinite_add - add two numberbers.
* numberbers >= 0 always and not null.
* string contains only numberbers.i
* If result can be stored in the buffer, return pointer to the outcome.
* else, returns 0.
*
*@n1:first numberber param.
*@n2:second numberber param.
*@r: result holder.
*@size_r: size of buffer.
*Return: pointer to r.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - Add two numberbers.
* @n1: first numberber param.
* @n2: second numberber param.
* @r: result holder.
* @r_index: index of buffer.
*
* Return: pointer to result, if it can be stored in buffer,
*         else, 0.
*/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int number, t = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		number = (*n1 - '0') + (*n2 - '0');
		number += t;
		*(r + r_index) = (number % 10) + '0';
		t = number / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		number = *(n1 - '0') + t;
		*(r + r_index) = (number % 10) + '0';
		t = number / 10;
	}

	for (; *n2; n2--;  r_index--)
	{
		number = (*n2 - '0') + t;
		*(r + r_index) = (number % 10) + '0';
		t = number / 10;
	}
}
