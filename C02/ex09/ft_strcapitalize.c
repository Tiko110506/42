/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:16:32 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/26 15:47:45 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alpha_numeric(char a)
{
	if ((a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

int	check_char(char a, int *in_word)
{
	if (a >= 'a' && a <= 'z' && !(*in_word))
	{
		*in_word = 1;
		return (-32);
	}
	if (a >= 'A' && a <= 'Z' && *in_word)
	{
		return (32);
	}
	if (is_alpha_numeric(a))
	{
		*in_word = 1;
	}
	else
	{
		*in_word = 0;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	in_word;
	int	i;

	in_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		str[i] += check_char(str[i], &in_word);
		i++;
	}
	return (str);
}
