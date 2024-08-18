namespace STD_C_FUNCS
{
	int	isalpha(int c)
	{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
		return (0);
	}
}