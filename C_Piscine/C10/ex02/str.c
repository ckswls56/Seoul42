/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:46:05 by cna               #+#    #+#             */
/*   Updated: 2022/06/07 22:36:04 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_tail(char *str, int skip)
{
	while (skip != 10)
	{
		if (*str == '\n')
			skip--;
		str++;
	}
	ft_putstr(str);
}

void	reverse_putstr(char *str, int bytes, int len)
{
	int	i;

	i = len - bytes;
	if (bytes > len)
		i = 0;
	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] && str2[i] && str[i] == str2[i])
		i++;
	return (str[i] - str2[i]);
}

int	count_line(char *buf)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			cnt++;
		i++;
	}
	return (cnt);
}
