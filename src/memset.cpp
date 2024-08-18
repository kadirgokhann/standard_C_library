#include <stdio.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	void*		memset(void *b, int c, size_t len)
	{
		unsigned int	i;
		char*			dest;

		dest = (char*)b;
		i = 0;
		while (i < len)
		{
			dest[i] = c;
			i++;
		}
		return ((void *)b);
	}
}