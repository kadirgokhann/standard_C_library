#include <unistd.h>

namespace STD_C_FUNCS
{
	void	putstr_fd(char *s, int fd)
	{
		int	i;

		i = 0;
		if (!s || !fd)
			return ;
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}