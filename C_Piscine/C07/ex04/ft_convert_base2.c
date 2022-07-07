/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:20 by cna               #+#    #+#             */
/*   Updated: 2022/06/02 22:14:21 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_nbrlen(int nbr, int base_len)
{
	int			i;
	long long	n;

	n = nbr;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= base_len;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char			*result;
	unsigned int	i;
	long long		n;

	n = nbr;
	i = ft_nbrlen(nbr, ft_strlen(base));
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (n == 0)
	{
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	result[i] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[--i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (result);
}
