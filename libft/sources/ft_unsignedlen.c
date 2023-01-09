#include "libft.h"

size_t	ft_unsignedlen(uintmax_t number, unsigned int base)
{
	size_t	size;

	if (base >= 2)
	{
		size = 1;
		while ((number /= base))
			size++;
	}
	else
		size = 0;
	return (size);
}
