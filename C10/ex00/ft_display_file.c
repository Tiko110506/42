/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibabaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 19:08:56 by tibabaya          #+#    #+#             */
/*   Updated: 2026/11/02 20:39:30 by tibabaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

int	file_open(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	return (fd);
}

void	file_read(int fd)
{
	char	buffer[1024];
	int		bytes;

	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many argumnets.\n", 20);
		return (0);
	}
	fd = file_open(argv[1]);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	file_read(fd);
	close(fd);
	return (0);
}
