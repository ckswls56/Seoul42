/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:51 by cna               #+#    #+#             */
/*   Updated: 2022/06/04 17:03:53 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *str);
int		ft_nbr_len(int nbr, int base_len);

int	skip(char *str)
{
	int	i;

	i = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	check_base(char *base)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (base[i])
	{
		t = &base[i];
		if (skip(t))
			return (1);
		if (*t == '+' || *t == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	find_base_c(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			sign;
	long long	result;
	int			base_len;
	int			i;

	base_len = ft_strlen(base);
	sign = 1;
	result = 0;
	i = skip(str);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && find_base_c(base, str[i]) != -1)
	{
		result = result * base_len + find_base_c(base, str[i]);
		i++;
	}
	return (sign * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	char	*result;

	if (check_base(base_from) || check_base(base_to))
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(temp, base_to);
	return (result);
}
