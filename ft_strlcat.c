#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = ft_strlen(dest) + 1;
	while (src[j] && j < n)
		dest[i + j] = src[j++];
	dest[i + j] = '\0';
	return (dest);
}
