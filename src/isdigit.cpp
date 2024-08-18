namespace STD_C_FUNCS
{
	int	isdigit(int c)
	{
		if (c >= 48 && c <= 57)
			return (1);
		return (0);
	}
}