#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*u;
	size_t			i;

	i = 0;
	u = (unsigned char*)s;
	while (n > i)
		u[n--] = '\0';
}
