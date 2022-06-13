/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:35:26 by sangminh          #+#    #+#             */
/*   Updated: 2022/05/28 14:48:29 by sangminh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(char *str, int n, int i, char print_num)
{
	if (i == n)
	{
		write(1, str, n);
		if (str[0] - '0' < 10 - n)
			write(1, ", ", 2);
	}
	else
	{
		while (print_num - '0' <= (10 - n) + i)
		{
			str[i] = print_num;
			comb(str, n, i + 1, ++print_num);
		}
	}
}

void	ft_print_combn(int n)
{
	char	str[10];

	if (0 < n && n < 10)
		comb(str, n, 0, '0');
}
