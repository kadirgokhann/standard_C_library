#include <stddef.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	size_t strlen(const char *s);
	char *strchr(const char *s, int c);
	size_t strlcpy(char *dst, const char *src, size_t dstsize);
	static int calc_start(char const *s1, char const *set)
	{
		int	start;

		start = 0;
		while (start < (int)strlen((char *)s1))
		{
			if (!strchr(set, s1[start]))
				break ;
			start++;
		}
		return (start);
	}

	static int	calc_end(char const *s1, char const *set)
	{
		int	end;

		end = strlen((char *)s1) - 1;
		while (end > 0)
		{
			if (!strchr(set, s1[end]))
				break ;
			end--;
		}
		return (end);
	}

	char	*strtrim(char const *s1, char const *set)
	{
		int		start;
		int		end;
		char	*res;

		if (!set)
			return (NULL);
		if (!s1)
		{
			res = (char*)malloc(1 * sizeof(char));
			res[0] = '\0';
			return (res);
		}
		end = calc_end(s1, set);
		start = calc_start(s1, set);
		if (start > end)
		{
			res = (char*)malloc(1 * sizeof(char));
			res[0] = '\0';
			return (res);
		}
		res = (char*)malloc((end - start + 1 + 1) * sizeof(char));
		if (res == NULL)
			return (NULL);
		strlcpy(res, (char *)&s1[start], end - start + 1 + 1);
		return (res);
	}
}