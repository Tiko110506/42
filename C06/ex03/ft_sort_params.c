/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:54:09 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/27 12:53:40 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_cmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_display(char **params, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (params[i][j] != '\0')
		{
			write(1, &params[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 0;
	while (j < argc * argc && argc > 2)
	{
		if (i == argc - 1)
		{
			i = 1;
		}
		if (ft_cmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
		}
		i++;
		j++;
	}
	ft_display(argv, argc);
	return (0);
}
