/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:17:46 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/28 12:46:22 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		i = 1;
	}
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < size)
	{
		num += ft_strlen(strs[i]);
		i++;
	}
	return (num);
}

void	ft_join(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i + 1 != size)
		{
			str[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	str = malloc(ft_strslen(strs, size) + 1 + ft_strlen(sep) * (size - 1));
	ft_join(size, strs, sep, str);
	return (str);
}
