#include <stddef.h>

namespace STD_C_FUNCS
{
	size_t	strlen(const char *s)
	{
		int	i;

		i = 0;
		while (s[i] != '\0')
			i++;
		return (i);
	}
}