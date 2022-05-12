#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: String to compare
 * @needle: String to locate
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph = haystack, *pn = needle;

	for (; *haystack; ph = haystack + 1)
	{
		for (haystack = ph, pn = needle; *ph == *pn && *pn; ph++, pn++)
		{
		}
		if (*pn == '\0')
			return (haystack);
	}
	return ('\0');
}
