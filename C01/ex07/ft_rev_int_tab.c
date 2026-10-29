/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:20:15 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/18 14:28:27 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*start;
	int	a;

	i = 0;
	start = tab;
	tab = tab + size - 1;
	while (i < (size / 2))
	{
		a = *start;
		*start = *tab;
		*tab = a;
		start++;
		tab--;
		i++;
	}
}
