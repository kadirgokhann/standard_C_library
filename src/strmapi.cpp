#include <stdlib.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	char *strmapi(char const *s, char (*f)(unsigned int, char))
	{
		char	*res;
		int		i;

		if (!s || !f)
			return (NULL);
		res = (char*)malloc((strlen((char *)s) + 1) * sizeof(char));
		if (res == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
}