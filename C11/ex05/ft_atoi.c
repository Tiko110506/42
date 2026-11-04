/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:23:58 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:17 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	ft_calc(char **argv, int (**f_arr)(int, int))
{
	int	res;

	res = 0;
	if (argv[2][0] == '+')
	{
		res = f_arr[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	if (argv[2][0] == '-')
	{
		res = f_arr[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	if (argv[2][0] == '/')
	{
		res = f_arr[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	if (argv[2][0] == '%')
	{
		res = f_arr[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	if (argv[2][0] == '*')
	{
		res = f_arr[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	return (res);
}
