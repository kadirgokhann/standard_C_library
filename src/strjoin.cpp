#include <stdlib.h>
#include <stddef.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	static char *join_strings(char const *s1, char const *s2, char *res)
	{
		unsigned int	i;
		unsigned int	j;

		i = 0;
		j = 0;
		while (s1[i] != '\0')
		{
			res[j] = s1[i];
			i++;
			j++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			res[j] = s2[i];
			i++;
			j++;
		}
		res[j] = '\0';
		return (res);
	}

	char	*strjoin(char const *s1, char const *s2)
	{
		char	*res;

		if (!s1 || !s2)
			return (NULL);
		res = (char*) malloc((strlen((char *)s1) + strlen((char *)s2) + 1) * 1);
		if (res == NULL)
			return (NULL);
		res = join_strings(s1, s2, res);
		return (res);
	}
}