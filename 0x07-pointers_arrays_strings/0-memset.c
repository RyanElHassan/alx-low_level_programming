#include "main.h"

char *_memset(char *s, int b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--
	}
	return(s);
}
