#include <stdio.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	void	*memcpy(void *dst, const void *src, size_t n)
	{
		unsigned int	i;
		const char		*buffer1;
		char			*buffer2;

		i = 0;
		buffer1 = (char *) src;
		buffer2 = (char*)  dst;
		while (i < n && (src || dst))
		{
			buffer2[i] = buffer1[i];
			i++;
		}
		return (dst);
	}
}