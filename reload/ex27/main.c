/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:25:20 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 19:00:52 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_putstr(char *src)
{
	int	size;
	int	i;

	size = ft_strlen(src);
	i = 0;
	while (i < size)
	{
		ft_putchar(src[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	buff[1];
	int		file;

	if (argc == 1)
		ft_putstr("File name missing.\n\0");
	if (argc > 2)
		ft_putstr("Too many arguments.\n\0");
	if (argc != 2)
		return (0);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Cannot read file.\n\0");
		return (0);
	}
	while (read(file, buff, sizeof(buff)) > 0)
		ft_putchar(*buff);
	close(file);
	return (0);
}
