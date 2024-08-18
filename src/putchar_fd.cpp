#include <unistd.h>

namespace STD_C_FUNCS
{
	void	putchar_fd(char c, int fd)
	{
		write(fd, &c, 1);
	}
}