/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:15:46 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/25 00:20:59 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	answer;

	answer = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		answer = answer * nb;
		power--;
	}
	return (answer);
}
