#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer for 1st string to be compared.
 * @s2: a pointer for 2nd string to be compared.
 * Return: if str1 < str2, the negative difference of the first unmatched .
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the first unmatch characters.
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
