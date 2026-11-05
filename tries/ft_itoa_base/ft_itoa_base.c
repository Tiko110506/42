/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:05:49 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/05 20:00:35 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	str_len(int value, int base)
{
	int	i;

	i = 0;
	if (value < 0 && base == 10)
	{
		i++;
	}
	while (value)
	{
		value /= base;
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	*new_str;

	i = ft_strlen(str) - 1;
	j = 0;
	new_str = malloc(i + 1);
	while (i >= 0)
	{
		new_str[j] = str[i];
		j++;
		i--;
	}
	new_str[j] = '\0';
	free(str);
	return (new_str);
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	char	*str_base;
	char	*new_str;
	int	i;

	str_base = "0123456789ABCDEF";
	str = malloc(str_len(value, base) + 1);
	i = 0;
	if (value < 0 && base == 10)
	{
		str[0] = '-';
		i++;
	}
	else if (value < 0)
	{
		value = -value;
	}
	while (value >= base)
	{
		str[i] = str_base[value % base];
		value = (value - (value % base)) / base;
		i++;
	}
	str[i] = str_base[value];
	i++;
	str[i] = '\0';
	new_str = ft_strrev(str);
	return (new_str);
}
