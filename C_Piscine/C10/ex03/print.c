/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:05:32 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 20:05:33 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_error(char *exe, char *file)
{
	ft_putstr(basename(exe));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	print_content_printable(char *str)
{
	int	j;

	j = 0;
	write(1, "|", 1);
	while (str[j] && j < 16)
	{
		if (is_printable(str[j]))
			write(1, &str[j], 1);
		else
		{
			write(1, ".", 1);
		}
		j++;
	}
	write(1, "|", 1);
}

void	print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_first_line(int word, int flag, int last)
{
	int		i;
	char	*res;

	if (word < 0)
		word = 0;
	res = ft_itoa_base(word);
	i = 0;
	while (i++ < 7 + flag - ft_strlen(res))
		write(1, "0", 1);
	i = 0;
	while (i < ft_strlen(res))
		write(1, &res[i++], 1);
	if (last)
		write(1, "\n", 1);
	else
		write(1, " ", 1);
}
