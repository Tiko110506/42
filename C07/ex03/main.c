#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*a;
	(void)argc;

	a = ft_strjoin(5, argv, ",");
	printf("%s", a);
	free(a);
	return (0);
}
