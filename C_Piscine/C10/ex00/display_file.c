/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:46:57 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 21:51:47 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display(char *str)
{
	int		i;
	int		fd;
	char	buf[102400];

	fd = open(str, O_RDONLY);
	i = 0;
	if (fd == -1)
		write(1, "Cannot read file.\n", 18);
	else
	{
		read(fd, buf, sizeof(buf));
		while (buf[i])
		{
			write(1, &buf[i++], 1);
		}
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (ac >= 3)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	display(av[1]);
	return (0);
}
