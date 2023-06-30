#include "main.h"

/**
 * _strcat - concatenates two strings
 * an input number of bytes from src
 * @dest: the string to be uppon
 * @src: the string to be dest
 * @n: number of bytes from src to be appende to dest
 * Return: a pointer to the result of the dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
