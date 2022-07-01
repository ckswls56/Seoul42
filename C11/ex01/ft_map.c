/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:52:49 by cna               #+#    #+#             */
/*   Updated: 2022/06/08 23:39:44 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tmp;

	i = -1;
	tmp = (int *)malloc(sizeof(int) * (length + 1));
	while (++i < length)
		tmp[i] = f(tab[i]);
	return (tmp);
}
