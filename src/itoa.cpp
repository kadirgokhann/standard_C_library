#include <stdio.h>
#include <stdlib.h>
namespace STD_C_FUNCS
{
	static int	cal_number_digits(int n)
	{
		int	res;

		res = 0;
		if (n < 0)
		{
			res++;
			n *= -1;
		}
		else if (n == 0)
			return (1);
		while ((unsigned int)n > 0)
		{
			res++;
			n = (unsigned int)n / 10;
		}
		return (res);
	}

	char	*itoa(int n)
	{
		char	*res;
		int		num_digits;

		num_digits = cal_number_digits(n);
		res = (char*) malloc((num_digits + 1) * sizeof(char));
		if (n == 0)
			res[0] = 48;
		if (res == NULL)
			return (NULL);
		if (n < 0)
		{
			res[0] = '-';
			n *= -1;
		}
		res[num_digits] = '\0';
		while ((num_digits - 1) >= 0 && (unsigned int)n > 0)
		{	
			res[num_digits - 1] = ((unsigned int)n % 10) + '0';
			n = (unsigned int)n / 10;
			num_digits--;
		}
		return (res);
	}
}