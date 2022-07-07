/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:47:24 by cna               #+#    #+#             */
/*   Updated: 2022/05/31 13:54:45 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_overlap(char *a, int len)
{
	int	i;
	int	j;

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

int	ft_strstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_putnbr(char *tmp_rst, char *base, int base_len)
{
	int	i;
	int	rst;

	i = -1;
	rst = 0;
	while (tmp_rst[++i])
	{
		rst *= base_len;
		rst += ft_strstr(base, tmp_rst[i]);
	}
	return (rst);
}

int	ft_atoi(char *str, char *base, char *tmp_rst)
{
	int	neg_cnt;
	int	len;

	len = 0;
	neg_cnt = 1;
	while (*str == 9 || *str == 10 || *str == 11 \
			|| *str == 12 || *str == 13 || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_cnt *= -1;
		str++;
	}
	while (ft_strstr(base, *str) != -1 && *str)
			tmp_rst[len++] = *str++;
	tmp_rst[len] = '\0';
	return (neg_cnt);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		base_len;
	char	tmp_rst[256];

	i = 0;
	while (i < 256)
		tmp_rst[i++] = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (!*base || base_len == 1 || is_overlap(base, base_len) || \
			ft_strstr(base, '+') != -1 || ft_strstr(base, '-') != -1 || \
			ft_strstr(base, 9) != -1 || ft_strstr(base, 10) != -1 || \
			ft_strstr(base, 11) != -1 || ft_strstr(base, 12) != -1 || \
			ft_strstr(base, 13) != -1 || ft_strstr(base, 32) != -1)
		return (0);
	i = ft_atoi(str, base, tmp_rst);
	return (i * ft_putnbr(tmp_rst, base, base_len));
}
/*#include <stdio.h>
int main()
{
	printf("======ex05======\n");
		char base[20] = "0	123456789";
		char base1[20] = "0	1";
		char base2[20] = "01\n23456789ABCDEF";
		char base3[20] = "poneyvif";
		char base4[20] = "poneyviff";
		printf("%d\n", ft_atoi_base("4523816", base));
		printf("%d\n", ft_atoi_base("10001010000011100101000", base1));
		printf("%d\n", ft_atoi_base("450728", base2));
		printf("%d\n", ft_atoi_base("nonpeyvp", base3));
		printf("%d\n", ft_atoi_base("nonpeyvp", base4));
		printf("%d\n", ft_atoi_base("-2147483648", base));
		printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", base1));
		printf("%d\n", ft_atoi_base("-80000000", base2));
		printf("%d\n", ft_atoi_base("-npppppppppp", base3));
}*/
