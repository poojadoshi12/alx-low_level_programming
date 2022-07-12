#include "main.h"

/**
 * strcpy - copies the string pointed
 * @dest: destiny
 * @src: copy
 *
 * Return: return
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
