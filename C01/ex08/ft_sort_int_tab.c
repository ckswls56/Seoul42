/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:50:05 by cna               #+#    #+#             */
/*   Updated: 2022/05/24 15:29:49 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swp(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = size - 1;
	if (size < 1)
		return ;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] > tab[j + 1])
				swp(&tab[j], &tab[j + 1]);
			j++;
		}
		i--;
	}
}
