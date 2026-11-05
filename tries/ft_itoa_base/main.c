#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa_base(int value, int base);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("'%s'\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
