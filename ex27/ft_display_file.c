/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:55:51 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/28 00:57:35 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Cannot read file.\n");
		return ;
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (close(fd) == -1)
		ft_puterror("Cannot close file.\n");
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_puterror("File name missing.\n");
	else if (argc > 2)
		ft_puterror("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
