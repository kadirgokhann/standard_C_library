#include <stddef.h>
#include <stdlib.h>

namespace STD_C_FUNCS
{
	char *substr(char const *s, unsigned int start, size_t len);
	static int calc_total_len(char const *s, char c)
	{
		int	i;
		int	tot_words;

		tot_words = 0;
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == c && s[i - 1] && s[i - 1] != c)
				tot_words++;
			i++;
		}
		if (s[i - 1] != c)
			tot_words += 1;
		return (tot_words);
	}

	static void	write_strings_to_array(char const *s, char c, char **result)
	{
		int		i;
		int		start;

		i = 0;
		start = 0;
		while (s[i] != '\0')
		{
			if (s[i] == c && s[i - 1] != c)
			{
				if (i - start != 0)
				{
					*result = substr(s, start, i - start);
					result++;
				}
				start = i + 1;
			}
			else if (s[i] == c && s[i - 1] == c)
				start++;
			i++;
		}
		if (s[i - 1] != c)
			*result = substr(s, start, i - start);
		if (s[i - 1] != c)
			result++;
		*result = NULL;
	}

	char	**split(char const *s, char c)
	{
		char	**result;

		if (!s)
			return (NULL);
		if (s[0] == '\0' || calc_total_len(s, c) == 0)
		{
			result = (char **)malloc(sizeof(char *) + 1);
			result[0] = NULL;
			return (result);
		}
		result = (char **)malloc((calc_total_len(s, c) + 1) * sizeof(char *));
		if (result == NULL)
		{
			free(result);
			return (NULL);
		}
		write_strings_to_array(s, c, result);
		return (result);
	}
}