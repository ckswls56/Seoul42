/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:46:42 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 21:46:46 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print_error(char *exe, char *file)
{
	ft_putstr(basename(exe));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	display(char *exe, char *str)
{
	char	buf[30719];
	int		fd;
	int		dir;

	errno = 0;
	fd = open(str, O_RDONLY);
	if (errno)
		print_error(exe, str);
	else
	{
		dir = open(str, O_DIRECTORY);
		if (dir != -1)
		{
			ft_putstr(basename(exe));
			ft_putstr(": ");
			ft_putstr(str);
			ft_putstr(": Is a directory\n");
		}
		else
		{
			read(fd, buf, sizeof(buf));
			ft_putstr(buf);
		}
	}
	close(fd);
}

void	ft_read(void)
{
	char	buf[30719];
	int		fd;
	int		i;
	int		j;

	fd = open("/dev/tty", O_RDWR);
	j = 0;
	i = read(fd, buf, sizeof(buf));
	while (i != 0)
	{	
		while (j < i)
			write(1, &buf[j++], 1);
		i = read(fd, buf, sizeof(buf));
		j = 0;
	}
	close(fd);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
	{
		ft_read();
	}
	else
	{
		while (av[i])
		{
			if (*av[i] == '-')
			{
				ft_read();
				i++;
			}
			else
				display(av[0], av[i++]);
		}
	}
	return (0);
}
