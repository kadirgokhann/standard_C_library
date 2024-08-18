namespace STD_C_FUNCS
{
	char*	strchr(const char *s, int c)
	{
		while (*s != c && *s != '\0')
			s++;
		if (*s == '\0')
		{
			if (c != '\0')
				return (nullptr);
			else
				return ((char *)s);
		}
		return ((char *)s);
	}
}