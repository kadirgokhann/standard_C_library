#include <stdlib.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	char *strdup(const char *s1)
	{
		char	*result;
		int		len;
		int		i;

		len = strlen((char *)s1);
		result = (char*) malloc((len + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		i = 0;
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
}