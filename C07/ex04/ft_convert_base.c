/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:47:58 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/29 13:20:17 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_base_check(char *base, int i);
int	ft_atoi_base(char *str, char *base);

void	ft_base_to_convert(long num, char *base, char *convert_num, int i)
{
	int	sys;

	if (num < 0)
	{
		convert_num[0] = '-';
		num = -num;
	}
	sys = ft_base_check(base, 0);
	if (num >= sys)
	{
		ft_base_to_convert(num / sys, base, convert_num, i - 1);
	}
	convert_num[i] = base[num % sys];
}

int	ft_convert_len(int sys, long num)
{
	int	size;

	size = 1;
	if (num == 0)
	{
		return (2);
	}
	if (num < 0)
	{
		size++;
		num = -num;
	}
	while (num >= 1)
	{
		num = num / sys;
		size++;
	}
	return (size);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec_num;
	int		sys;
	char	*convert_num;
	int		len;

	if (!(ft_base_check(base_from, 0) && ft_base_check(base_to, 0)))
	{
		return (NULL);
	}
	dec_num = ft_atoi_base(nbr, base_from);
	sys = ft_base_check(base_to, 0);
	len = ft_convert_len(sys, dec_num);
	convert_num = malloc(len);
	if (!convert_num)
	{
		return (NULL);
	}
	convert_num[len - 1] = '\0';
	ft_base_to_convert(dec_num, base_to, convert_num, len - 2);
	return (convert_num);
}
