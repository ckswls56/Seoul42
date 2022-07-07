/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:14 by cna               #+#    #+#             */
/*   Updated: 2022/06/01 17:15:25 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*n;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	n = (int *)malloc(sizeof(int) * (max - min));
	if (n == NULL)
	{
		range[0] = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	range[0] = n;
	return (i);
}
