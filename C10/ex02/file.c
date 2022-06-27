/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:46:09 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 22:32:39 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

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

void	print_dir(char *exe, char *dir)
{	
	ft_putstr(basename(exe));
	ft_putstr(": ");
	ft_putstr(dir);
	ft_putstr(": Is a directory\n");
}

void	display(char *exe, char *str, int bytes)
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
			print_dir(exe, str);
		else
		{	
			reverse_putstr(buf, bytes, read(fd, buf, sizeof(buf)));
		}
	}
	close(fd);
}

void	display2(char *exe, char *str)
{
	char	buf[30714];
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
			print_dir(exe, str);
		else
		{
			read(fd, buf, sizeof(buf));
			if (count_line(buf) <= 10)
				ft_putstr(buf);
			else
				ft_tail(buf, count_line(buf));
		}
	}
	close(fd);
}

void	display_name(char *str)
{
	ft_putstr("==>");
	ft_putstr(str);
	ft_putstr(" <==\n");
}
