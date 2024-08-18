namespace STD_C_FUNCS
{
	void 	putchar_fd(char c, int fd);
	void	putnbr_fd(int n, int fd)
	{
		if (n == -2147483648)
		{
			putnbr_fd(n / 10, fd);
			putchar_fd('8', fd);
		}
		else if (n < 0)
		{
			putchar_fd('-', fd);
			putnbr_fd(-n, fd);
		}
		else
		{
			if (n > 9)
				putnbr_fd(n / 10, fd);
			putchar_fd((n % 10) + '0', fd);
		}
	}
}