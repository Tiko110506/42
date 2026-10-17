/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:13:37 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/18 01:37:32 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	three_digit_printer(int a, int b)
{
	ft_putchar(a + '0');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
}

void	ft_print_combo(void)
{
	int	a;
	int	b;

	a = 0;
	b = 12;
	while (a < 7)
	{
		while (b <= 89)
		{
			three_digit_printer(a, b);
			write(1, ", ", 2);
			if (b % 10 != 9)
			{
				b += 1;
			}
			else
			{
				b = b + (b / 10) + 3;
			}
		}
		a += 1;
		b = (a + 1) * 10 + (a + 2);
	}
	write(1, "789", 3);
}
