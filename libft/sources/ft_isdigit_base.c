#include "libft.h"

int		ft_isdigit_base(char c, int base)
{
	const char	*digits = "0123456789ABCDEF";
	int			i;

	i = 0;
	while (i < base)
	{
		if (ft_toupper(c) == digits[i])
			return (i);
		i++;
	}
	return (-1);
}
