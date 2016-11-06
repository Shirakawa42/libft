#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	*s + ft_strlen(s);
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			*t = *s;
			return (t);
		}
		*s--;
	}
	return (NULL);
}
