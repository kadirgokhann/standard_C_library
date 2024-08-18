#include <stdio.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	void	*memmove(void *dst, const void *src, size_t len)
	{
		unsigned int	i;
		char			*buffer1;
		char			*buffer2;

		i = len;
		buffer1 = (char *)src;
		buffer2 = (char *)dst;
		if (dst == src)
			return (dst);
		else if (buffer2 > buffer1)
		{
			while (i-- > 0)
				*(buffer2 + i) = *(buffer1 + i);
		}
		else
		{
			i = 0;
			while (i < len)
			{
				*(buffer2 + i) = *(buffer1 + i);
				i++;
			}
		}
		return (buffer2);
	}
}