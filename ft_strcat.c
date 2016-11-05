#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(dest) + 1;
	while (src[j])
		dest[i + j] = src[j++];
	dest[i + j] = '\0';
	return (dest);
}
