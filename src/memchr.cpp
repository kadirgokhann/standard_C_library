#include <stddef.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	void*	memchr(const void *s, int c, size_t n)
	{
		unsigned int	i;
		unsigned char	*buffer;
		unsigned char	c2;

		buffer = (unsigned char *)s;
		c2 = (unsigned char)c;
		i = 0;
		while (i < n)
		{
			if (*buffer == c2)
				return (buffer);
			buffer++;
			i++;
		}
		return (nullptr);
	}
}