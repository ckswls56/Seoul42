/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:32:07 by cna               #+#    #+#             */
/*   Updated: 2022/06/04 17:16:00 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			a = '-';
			write(1, &a, 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		if (0 <= nb && nb < 10)
		{
			b = nb + '0';
			write(1, &b, 1);
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str[0], 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par -> str)
	{
		ft_putstr(par -> str);
		write(1, "\n", 1);
		ft_putnbr(par -> size);
		write(1, "\n", 1);
		ft_putstr(par -> copy);
		write(1, "\n", 1);
		par++;
	}
}
