/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:25:22 by cna               #+#    #+#             */
/*   Updated: 2022/05/21 18:42:12 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_first(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		a++;
	}
	ft_putchar('\n');
}

void	ft_last(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		a++;
	}
	ft_putchar('\n');
}

void	ft_print(int x)
{	
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		a++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_first(x);
		else if (i == y - 1)
			ft_last(x);
		else
			ft_print(x);
		i++;
	}
}
