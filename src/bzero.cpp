#include <stddef.h>
namespace STD_C_FUNCS
{
	void	bzero(void* s, size_t n)
	{
		size_t	i;
		char	*dest;

		i 	 = 0;
		dest = (char*) s;
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

}