/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 20:06:46 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 20:07:00 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	sub_hex_content(int *j, char *tmp)
{
	if (*j <= 7)
		write(1, " ", 1);
	while ((*j)++ < 16)
		write(1, "  ", 3);
	write(1, " ", 1);
	print_content_printable(tmp);
}

void	sub_display(char **str, char *exe, int i)
{
	ft_putstr(basename(exe));
	ft_putstr(": ");
	ft_putstr(str[i]);
	ft_putstr(": Is a directory\n");
}

void	print_line_cat(int *total, char *res, int flag)
{
	print_first_line(*total, flag, 0);
	print_hex_content(res, total, flag);
}

void	print_eof(int j, int *total, int flag, char *res)
{
	if (j != 0)
	{
		print_first_line(*total, flag, 0);
		print_hex_content(res, total, flag);
	}
	print_first_line(*total, flag, 1);
}
