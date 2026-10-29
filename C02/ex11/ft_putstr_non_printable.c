/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:40:09 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/20 16:20:51 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_dec_to_hex(char c)
{
	char	*start;
	char	hex[4];

	hex[3] = '\0';
	hex[0] = '\\';
	start = hex;
	hex[2] = (c % 16) + 87;
	c = c / 16;
	hex[1] = c + 48;
	return (start);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, ft_dec_to_hex(str[i]), 3);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
