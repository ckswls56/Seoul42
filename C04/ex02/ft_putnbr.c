/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:23:39 by cna               #+#    #+#             */
/*   Updated: 2022/05/26 18:18:06 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			a = '-';
			write(1, &a, 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		if (0 <= nb && nb < 10)
		{
			b = nb + '0';
			write(1, &b, 1);
		}
	}
}
/*#include <stdio.h>
#include <string.h>
int main(){
printf("======ex02======\n");
		int str = 2147483647;
		int str1 = -2147483648;
		int str2 = 0;
		int str3 = -0;
		ft_putnbr(str); printf("\n");
		ft_putnbr(str1); printf("\n");
		ft_putnbr(str2); printf("\n");
		ft_putnbr(str3); printf("\n");
}*/
