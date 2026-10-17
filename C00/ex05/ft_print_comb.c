/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:13:37 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/16 16:03:32 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	printer(char num[])
{
	write(1, &num[0], 1);
	write(1, &num[1], 1);
	write(1, &num[2], 1);
}

void	comma_printer(char num[])
{
	if (num[0] != '7')
	{
		write(1, ", ", 1);
	}
}

void	combo_generator(char num[])
{
	while (num[0] < '8')
	{
		printer(num);
		comma_printer(num);
		if (num[2] != '9')
		{
			num[2]++;
		}
		else
		{
			if (num[2] == '9')
			{
				num[1]++;
				num[2] = num[1] + 1;
				if (num[1] == '9')
				{
					num[0]++;
					num[1] = num[0] + 1;
					num[2] = num[1] + 1;
				}
			}
		}
	}
}

void	ft_print_combo(void)
{
	char	num[4];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	num[3] = '\0';
	combo_generator(num);
}
