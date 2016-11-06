#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbr;
	int		i;
	int		isneg;

	isneg = 1;
	nbr = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		isneg = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + ((unsigned int)str[i++] - 48);
	return (nbr * isneg);
}
