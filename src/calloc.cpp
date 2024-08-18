#include <stdlib.h>

namespace STD_C_FUNCS
{
	void bzero(void *s, size_t n);
	void *calloc(size_t count, size_t size)
	{
		void	*result;

		result = malloc(count * size);
		if (result == NULL)
			return (NULL);
		bzero(result, count * size);
		return (result);
	}
}
