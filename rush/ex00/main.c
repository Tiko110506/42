/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:13:32 by tibabaya          #+#    #+#             */
/*   Updated: 2026/10/24 18:59:50 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		input_checker(char *str);
int		**matrix_creator(int n);
void	matrix_free_er(int **matrix, int size);

int	main(int argc, char **argv)
{
	int	**matrix;
	int	n;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(input_checker(argv[1])))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	n = input_checker(argv[1]);
	matrix = matrix_creator(n);
	matrix_free_er(matrix, n);
	return (0);
}
