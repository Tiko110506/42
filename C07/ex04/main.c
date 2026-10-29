#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*a;
	a = ft_convert_base("-2147483648", "0123456789", "0123456789");
	printf("%s\n", a);
	free(a);
	return (0);
}
