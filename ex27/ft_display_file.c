/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:37:26 by elerazo-          #+#    #+#             */
/*   Updated: 2024/09/19 19:20:05 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elerazo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:06:02 by elerazo-          #+#    #+#             */
/*   Updated: 2024/09/19 16:28:55 by elerazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	error_display(char *messa)
{
	while (*messa)
	{
		write(2, messa, 1);
		messa++;
	}
}

void	file_display(int fd)
{
	char	buffer[BUF_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
}

int	main(int argc, char **argv)

{
	int	fd;

	if (argc < 2)
	{
		error_display("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		error_display("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_display("Cannot read file.\n");
		return (1);
	}
	file_display(fd);
	close(fd);
	return (0);
}
