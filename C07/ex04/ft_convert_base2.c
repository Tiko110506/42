/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:26:37 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/29 13:19:17 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_base_check(char *base, int i)
{
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_get_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_space_skipper(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_edge_case(long long num, int minus)
{
	int	nbr;

	if (num == 2147483648 && minus == -1)
	{
		nbr = -2147483648;
		return (nbr);
	}
	nbr = num * minus;
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			minus;
	long long	nbr;

	minus = 1;
	nbr = 0;
	if (ft_base_check(base, 0) == 0)
	{
		return (0);
	}
	i = ft_space_skipper(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			minus = -minus;
		}
		i++;
	}
	while (ft_get_char(str[i], base) != -1)
	{
		nbr = (nbr * ft_base_check(base, 0)) + ft_get_char(str[i], base);
		i++;
	}
	return (ft_edge_case(nbr, minus));
}
