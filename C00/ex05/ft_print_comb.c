/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:12:00 by sangminh          #+#    #+#             */
/*   Updated: 2022/05/26 19:15:35 by sangminh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(char *str, int i, char print_num)
{
	if (i == 3)
	{
		write(1, str, 3);
		if (str[0] - '0' < 10 - 3)
			write(1, ", ", 2);
	}
	else
	{
		while (print_num - '0' <= (10 - 3) + i)
		{
			str[i] = print_num;
			comb(str, i + 1, ++print_num);
		}
	}
}

void	ft_print_comb(void)
{
	char	str[4];

	comb(str, 0, '0');
}
