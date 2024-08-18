namespace STD_C_FUNCS
{
	char	*strrchr(const char *s, int c)
	{
		int		i;

		i = 0;
		while (*(s + i) != '\0')
			i++;
		while (*(s + i) != c && i > 0)
		{
			i--;
		}
		if (i == 0 && *(s + i) != c)
			return (0);
		return ((char *)(s + i));
	}
}