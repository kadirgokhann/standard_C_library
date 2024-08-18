#include <stddef.h>

namespace STD_C_FUNCS
{
	size_t	strlcpy(char *dst, const char *src, size_t dstsize)
	{
		unsigned int	i;
		const char		*buffer1;
		unsigned int	length;

		i = 0;
		length = 0;
		buffer1 = src;
		if (!src)
			return (0);
		while (buffer1[i] != '\0')
			i++;
		length = i;
		if (dstsize == 0)
			return (length);
		i = 0;
		while (i < length && i < (dstsize - 1) && dstsize != 0)
		{
			dst[i] = buffer1[i];
			i++;
		}
		dst[i] = '\0';
		return (length);
	}
}