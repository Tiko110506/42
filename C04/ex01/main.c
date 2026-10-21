void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		argv++;
		ft_putstr(*argv);
	}
	return (0);
}
