/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 20:08:43 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/24 21:31:25 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	arr_free(int *arr, int n)
{
	free(arr);
}

int	*arr(char *str, int n)
{
	int	i;
	int	*arr;

	i = 0;
	arr = maloc(sizeof(int) * (n * 4));
	if (arr)
	{
		free(arr);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			arr[i] = str[i] - '0';
		}
		i++;
	}
	return (arr);
}
