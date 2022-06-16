/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:26:41 by cna               #+#    #+#             */
/*   Updated: 2022/05/21 18:43:35 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_middle(int x)
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

void	ft_print(int x)
{	
	int	a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
			ft_putchar('A');
		else if (a == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
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
		if (i == 0 || i == y - 1)
			ft_print(x);
		else
			ft_middle(x);
		i++;
	}
}
