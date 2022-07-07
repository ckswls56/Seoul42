/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:44:55 by cna               #+#    #+#             */
/*   Updated: 2022/05/30 17:03:01 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	n;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			if (str[i] < 0)
			{
				n = str[i] + 256;
				write(1, "\\", 1);
				print_hex(n);
			}
			else
			{
				write(1, "\\", 1);
				print_hex(str[i]);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
