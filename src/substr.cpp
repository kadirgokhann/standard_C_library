#include <stddef.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	char *substr(char const *s, unsigned int start, size_t len)
	{
		unsigned int	j;
		char			*result;

		j = 0;
		if (!s || !len || start >= strlen((char *)s))
		{
			result = (char*)malloc(1 * sizeof(char));
			result[0] = '\0';
			return (result);
		}
		result = (char*)malloc((len + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		while (j < len)
		{
			result[j] = s[start];
			start++;
			j++;
		}
		result[j] = '\0';
		return (result);
	}
}