/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:53:34 by cna               #+#    #+#             */
/*   Updated: 2022/06/09 00:03:19 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int		neg_cnt;
	int		result;

	neg_cnt = 1;
	result = 0;
	while (*str == 9 || *str == 10 || *str == 11 \
			|| *str == 12 || *str == 13 || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_cnt *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (neg_cnt * result);
}

int	is_op(char *op)
{
	if ((op[0] == '+' || op[0] == '-' || op[0] == '*' || \
				op[0] == '/' || op[0] == '%') && op[1] == '\0')
		return (1);
	return (0);
}

void	exec_fun(int val_1, int val_2, char op, void (*f[])(int, int))
{
	if (op == '+')
		f[0](val_1, val_2);
	else if (op == '-')
		f[1](val_1, val_2);
	else if (op == '*')
		f[2](val_1, val_2);
	else if (op == '%')
		f[3](val_1, val_2);
	else if (op == '/')
		f[4](val_1, val_2);
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int		val[2];
	void	(*f[5])(int, int);

	if (argc != 4)
		return (0);
	if (!is_op(argv[2]))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	val[0] = ft_atoi(argv[1]);
	val[1] = ft_atoi(argv[3]);
	f[0] = do_plus;
	f[1] = do_minus;
	f[2] = do_times;
	f[3] = do_mod;
	f[4] = do_div;
	exec_fun(val[0], val[1], argv[2][0], f);
}
