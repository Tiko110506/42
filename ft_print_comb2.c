/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <tibabaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:47:37 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/17 00:55:47 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	char_creation(char *combo)
{
	combo[0] = '0';
	combo[1] = '0';
	combo[2] = ' ';
	combo[3] = '0';
	combo[4] = '1';
	combo[5] = '\0';
}

void set2_genrator(char *combo, char *start)
{
	if (*combo != ' ')
	{
		while (*combo != '9')
		{
			*combo += 1;
			write(1, start, 5);
			write(1, ", ", 2);
		}
		combo--;
		set2_genrator(combo, start);
	}
	else
	{
		return;
	}
}

void	ft_print_comb2(void)
{
	char combo[6];

	char_creation(combo);
	write(1, &combo, 5);
	write(1, ", ", 2);
	set2_genrator(&combo[4], combo);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
