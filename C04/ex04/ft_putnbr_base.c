/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:37:10 by cna               #+#    #+#             */
/*   Updated: 2022/05/30 22:39:55 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

int	ft_strstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	is_overlap(char *a)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(a);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (a[i] == a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(long long nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= base_len)
	{
		ft_putnbr(nb / base_len, base);
		nb %= base_len;
	}
	if (0 <= nb && nb <= base_len)
	{
		write(1, &base[nb], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!*base || ft_strlen(base) == 1 || is_overlap(base) \
			|| ft_strstr(base, '+') || ft_strstr(base, '-'))
		return ;
	ft_putnbr((long long)nbr, base);
}
/*#include <stdio.h>
#include <string.h>
int main(){
	printf("======ex04======\n");
		char base[20] = "0123456789";
		char base1[20] = "01";
		char base2[20] = "0123456789ABCDEF";
		char base3[20] = "poneyvif";
		char base4[20] = "poneyviff";
		int nbr = -4523816;
		int nbr1 = -2147483648;
		ft_putnbr_base(nbr, base); printf("\n");
		ft_putnbr_base(nbr, base1); printf("\n");
		ft_putnbr_base(nbr, base2); printf("\n");
		ft_putnbr_base(nbr, base3); printf("\n");
		ft_putnbr_base(nbr, base4); printf("\n");
		ft_putnbr_base(nbr1, base); printf("\n");
		ft_putnbr_base(nbr1, base1); printf("\n");
		ft_putnbr_base(nbr1, base2); printf("\n");
		ft_putnbr_base(nbr1, base3); printf("\n");
		ft_putnbr_base(nbr1, base4); printf("\n");
}*/
