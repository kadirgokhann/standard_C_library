namespace STD_C_FUNCS
{
	int	isascii(int c)
	{
		if (c >= 0 && c <= 127)
			return (1);
		return (0);
	}
}