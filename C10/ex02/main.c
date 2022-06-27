/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:46:02 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 22:38:57 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	error_offset(char **av)
{	
	ft_putstr(av[0]);
	ft_putstr(": illegal offset -- ");
	ft_putstr(av[2]);
	write(1, "\n", 1);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str == 9 || *str == 10 || *str == 11 \
			|| *str == 12 || *str == 13 || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	return (result);
}

void	ft_read(void)
{
	char	buf[30719];
	int		fd;
	int		i;

	fd = open("/dev/tty", O_RDWR);
	i = read(fd, buf, sizeof(buf));
	while (i != 0)
		i = read(fd, buf, sizeof(buf));
	close(fd);
}

void	main2(char **av, int bytes, int i, int ac)
{	
	while (av[i])
	{
		if (ac >= 3)
		{
			if (bytes == 0)
			{
				display_name(av[i]);
				display2(av[0], av[i++]);
			}
			else
			{
				display_name(av[i]);
				display(av[0], av[i++], bytes);
			}	
			if (!av[i + 1])
				write(1, "\n", 1);
		}
		else
		{
			if (bytes == 0)
				display2(av[0], av[i++]);
			else
				display(av[0], av[i++], bytes);
		}
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	bytes;

	i = 1;
	bytes = 0;
	if (ac == 1)
		ft_read();
	else
	{
		if (!strcmp(av[1], "-c"))
		{
			if (*av[2] >= '0' && *av[2] <= '9')
				bytes = ft_atoi(av[2]);
			else
			{
				error_offset(av);
				return (0);
			}
			i = 3;
		}
	}
	main2(av, bytes, i, ac);
	return (0);
}
