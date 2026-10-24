/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 00:25:17 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/25 00:31:39 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index > 2)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	if (index == 2 || index == 1)
	{
		return (1);
	}
	return (0);
}
