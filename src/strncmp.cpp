#include <stddef.h>

namespace STD_C_FUNCS
{
	int	strncmp(const char *s1, const char *s2, size_t n)
	{
		unsigned int	i;

		i = 0;
		if (n == 0)
			return (0);
		while ((*(s1 + i) == *(s2 + i)))
		{
			if (i == (n - 1) || *(s1 + i) == '\0' || *(s2 + i) == '\0')
				break ;
			i++;
		}
		return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
	}
}