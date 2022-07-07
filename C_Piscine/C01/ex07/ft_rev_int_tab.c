/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:12:56 by cna               #+#    #+#             */
/*   Updated: 2022/06/01 17:17:07 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	if (size < 1)
		return ;
	i = 0;
	while (i < size / 2)
	{
		swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
