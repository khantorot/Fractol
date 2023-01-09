#include "libft.h"

size_t	ft_wcslen(const wchar_t *s)
{
	const wchar_t	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
