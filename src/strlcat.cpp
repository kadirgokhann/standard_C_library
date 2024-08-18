#include <stddef.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	size_t strlcat(char *dst, const char *src, size_t dstsize)
	{
		unsigned int	i;
		unsigned int	y;
		unsigned int	dst_len;

		i = strlen(dst);
		dst_len = strlen(dst);
		y = 0;
		if (dstsize && strlen(dst) <= dstsize)
		{
			while (src[y] != '\0' && i < (dstsize - 1))
			{
				dst[i] = src[y];
				i++;
				y++;
			}
			dst[i] = '\0';
		}
		if (dstsize == 0)
			dst_len = 0;
		if (dstsize < dst_len)
			dst_len = dstsize;
		return (dst_len + strlen((char *)src));
	}
}