/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_fun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:53:40 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 00:01:44 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_plus(int val_1, int val_2)
{
	ft_putnbr(val_1 + val_2);
}

void	do_minus(int val_1, int val_2)
{
	ft_putnbr(val_1 - val_2);
}

void	do_times(int val_1, int val_2)
{
	ft_putnbr(val_1 * val_2);
}

void	do_mod(int val_1, int val_2)
{
	if (val_2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(val_1 % val_2);
}

void	do_div(int val_1, int val_2)
{
	if (val_2 == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(val_1 / val_2);
}
