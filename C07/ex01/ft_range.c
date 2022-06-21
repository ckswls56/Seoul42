/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:12 by cna               #+#    #+#             */
/*   Updated: 2022/06/01 17:10:06 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*n;
	int	i;

	if (min >= max)
		return (NULL);
	n = (int *)malloc(sizeof(int) * (max - min));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
