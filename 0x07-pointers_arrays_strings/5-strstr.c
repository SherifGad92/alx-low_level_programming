#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: parent string
 * @needle: substring
 *
 * Return: a pointer to the beginning of located substring,
 *	\0 if no match
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
