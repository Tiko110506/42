/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:29:23 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/24 20:08:18 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_format(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '9')
			{
				return (0);
			}
			count++;
		}
		else
		{
			if (str[i] != ' ')
			{
				return (0);
			}
		}
		i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	nbr_check(char *str, int count)
{
	int	i;
	int	j;

	i = 0;
	j = 4;
	while (j <= 9)
	{
		if (count == (4 * j))
		{
			while (str[i] != '\0')
			{
				if ((str[i] < '1' || str[i] > (j + '0')) && str[i] != ' ')
				{
					return (0);
				}
				i++;
			}
			return (j);
		}
		j++;
	}
	return (0);
}

int	input_checker(char *str)
{
	int	count;
	int	i;
	int	n;

	count = check_format(str);
	i = 0;
	if (str[ft_strlen(str) - 1] == ' ')
	{
		return (0);
	}
	n = nbr_check(str, count);
	return (n);
}
