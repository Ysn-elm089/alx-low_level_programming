#include "main.h"

/**
 * _strncat - concatenate two strings
 * using n as number of bytes from scr
 * @dest: string uppon
 * @src: string dest
 * @n: number of bytes from scr to dest.
 * Return: pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
