/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:55:48 by cna               #+#    #+#             */
/*   Updated: 2022/05/30 18:09:49 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_hex_content(unsigned char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 16 && str[i])
	{
		print_hex(str[i]);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	if (!str[i])
	{
		print_hex(str[i]);
		j = (15 - i) / 2 + 1;
		while (--j > 0 && i != 16)
			write(1, "     ", 5);
		if (i % 2 == 0 && i != 16)
			write(1, "  ", 2);
		write(1, " ", 1);
	}
}

void	print_content_printable(unsigned char *str)
{
	int	j;

	j = 0;
	while (str[j] && j < 16)
	{
		if (is_printable(str[j]))
			write(1, &str[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	if (str[j] == '\0')
		write(1, ".", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		j = 56;
		while (j >= 0)
		{
			print_hex((unsigned long long)(addr + i) >> j);
			j -= 8;
		}
		write(1, ": ", 2);
		print_hex_content((unsigned char *)(addr + i));
		print_content_printable((unsigned char *)(addr + i));
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}
