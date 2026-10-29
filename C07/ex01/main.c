#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	*arr;

	if (argc == 3)
	{
		arr = ft_range(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", arr[9]);
	}
	return (0);
}
