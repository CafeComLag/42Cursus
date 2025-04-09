int	ft_isspace(char	c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr)
	{
		if (*nptr < '0' || *nptr > '9')
			return (sign * value);
		value = (value * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * value);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%d\n%d", atoi(argv[1]), ft_atoi(argv[1]));
	}
}
