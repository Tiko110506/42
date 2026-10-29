/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:25:13 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/28 20:24:28 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_sep(str[i], charset))
		{
			if (ft_sep(str[i + 1], charset) || str[i + 1] == '\0')
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}

char	*ft_cpy(char *src, int length)
{
	char	*word;
	int		i;

	word = malloc(length + 1);
	i = 0;
	while (i < length)
	{
		word[i] = src[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_last(char **splited_list, int i)
{
	splited_list[i] = NULL;
	return (splited_list);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited_list;
	int		i;
	int		length;
	int		j;

	splited_list = malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	i = 0;
	while (*str)
	{
		length = 0;
		j = 0;
		while ((!ft_sep(str[j], charset)) && str[j] != '\0')
		{
			j++;
			length++;
		}
		if (length > 0)
		{
			splited_list[i++] = ft_cpy(str, length);
			str += length;
		}
		else
			str++;
	}
	return (ft_last(splited_list, i));
}
