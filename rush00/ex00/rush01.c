/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:23:25 by cna               #+#    #+#             */
/*   Updated: 2022/05/21 18:39:46 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_first(int x)
{
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
			ft_putchar('/');
		else if (a == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
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
		if (a == 0)
			ft_putchar('\\');
		else if (a == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
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
			ft_putchar('*');
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
