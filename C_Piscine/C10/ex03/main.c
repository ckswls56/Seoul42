/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:51:16 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 19:52:52 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int	g_q = 1;

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		len;

	len = 0;
	i = 0;
	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	ft_nbrlen(int nbr, int base_len)
{
	int			i;
	long long	n;

	n = nbr;
	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr)
{
	char			*result;
	unsigned int	i;
	long long		n;
	char			*base;

	base = "0123456789abcdef";
	n = nbr;
	i = ft_nbrlen(nbr, 16);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (n == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	result[i] = '\0';
	while (n > 0)
	{
		result[--i] = base[n % 16];
		n /= 16;
	}
	return (result);
}

int	main(int ac, char *av[])
{
	int		flag;
	char	res[30 * KB - 1];
	char	*tmp;

	tmp = (char *)malloc(1);
	*tmp = 0;
	flag = 0;
	res[0] = 0;
	if (ac == 1)
		ft_read(0, res, flag);
	else
	{
		if (!ft_strcmp(av[q], "-C"))
		{
			flag = 1;
			if (ac == 2)
			{
				ft_read(0, res, flag);
				return (0);
			}
			q++;
		}
		display(av[0], &av[q], flag, tmp);
	}
	return (0);
}
