/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_creator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:00:20 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/24 18:58:07 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	free_matrix(int **matrix, int rows)
{
	while (rows > 0)
	{
		free(matrix[rows - 1]);
		rows--;
	}
	free(matrix);
}

int	**matrix_creator(int n)
{
	int	**my_matrix;
	int	i;

	i = 0;
	my_matrix = malloc(sizeof(*my_matrix) * n);
	if (!(my_matrix))
	{
		return (NULL);
	}
	while (i < n)
	{
		my_matrix[i] = malloc(sizeof(int) * n);
		if (!(my_matrix[i]))
		{
			free_matrix(my_matrix, i);
			return (NULL);
		}
		i++;
	}
	return (my_matrix);
}
