/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 00:56:28 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/22 01:21:45 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit[12];
	int		i;
	int		mod;

	i = 10;
	digit[11] = '\0';
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	while (nb != 0)
	{
		mod = nb % 10;
		if (mod < 0)
		{
			mod = -mod;
		}
		digit[i--] = mod + '0';
		nb = nb / 10;
	}
	write(1, &digit[i + 1], 10 - i);
}
