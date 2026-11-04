/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:21:19 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:16 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nbr);
int		ft_calc(char **argv, int (**f_arr)(int, int));
int		ft_atoi(char *str);
int		ft_add(int n1, int n2);
int		ft_minus(int n1, int n2);
int		ft_div(int n1, int n2);
int		ft_modulo(int n1, int n2);
int		ft_multiple(int n1, int n2);

int	main(int argc, char **argv)
{
	int	(*f_arr[5])(int, int);
	int	res;

	f_arr[0] = ft_add;
	f_arr[1] = ft_minus;
	f_arr[2] = ft_div;
	f_arr[3] = ft_modulo;
	f_arr[4] = ft_multiple;
	if (argc == 4)
	{
		res = ft_calc(argv, f_arr);
		if ((argv[2][0] == '/' || argv[2][0] == '%') && !ft_atoi(argv[3]))
		{
			return (0);
		}
		else
		{
			ft_putnbr(res);
			write(1, "\n", 1);
		}
	}
	return (0);
}
