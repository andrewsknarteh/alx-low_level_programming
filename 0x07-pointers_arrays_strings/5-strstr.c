#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: strin in which to check for needle
 * @needle: substring to find in haystack
 *
 * Retun: pointer to begining of needle in haystack or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0; b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] == needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a)
		}
		a++;
	}
	return ('\0');
}
