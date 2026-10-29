/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:39:44 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/18 15:11:46 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (size * size) && size != 1)
	{
		if ((i != (size - 1)) && tab[i] > tab[i + 1])
		{
			tab[i] = tab[i] + tab[i + 1];
			tab[i + 1] = tab[i] - tab[i + 1];
			tab[i] = tab[i] - tab[i + 1];
		}
		i++;
		j++;
		if (i == (size - 1))
		{
			i = 0;
		}
	}
}
