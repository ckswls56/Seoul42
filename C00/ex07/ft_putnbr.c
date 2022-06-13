/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:13:04 by sangminh          #+#    #+#             */
/*   Updated: 2022/05/29 16:43:01 by sangminh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(int nb)
{
	char	c;

	if (nb == 0)
		return ;
	c = nb % 10 + '0';
	putnum(nb /= 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	putnum(nb);
}
