/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:40:38 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/24 19:46:08 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(int **matrix, int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			c = matrix[i][j] + '0';
			ft_putchar(c);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
