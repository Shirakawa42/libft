#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			*t = *s;
			return (t);
		}
		*s++;
	}
	return (NULL);
}
