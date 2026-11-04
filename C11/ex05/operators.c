/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:35:06 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/04 12:16:40 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_add(int n1, int n2)
{
	return (n1 + n2);
}

int	ft_minus(int n1, int n2)
{
	return (n1 - n2);
}

int	ft_div(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (n1 / n2);
}

int	ft_modulo(int n1, int n2)
{
	if (n2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (n1 % n2);
}

int	ft_multiple(int n1, int n2)
{
	return (n1 * n2);
}
