/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:23:52 by cna               #+#    #+#             */
/*   Updated: 2022/05/30 22:36:53 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg_cnt;
	int	result;

	neg_cnt = 1;
	result = 0;
	while (*str == 9 || *str == 10 || *str == 11 \
			|| *str == 12 || *str == 13 || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_cnt *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	return (neg_cnt * result);
}
/*#include <string.h>
#include <stdio.h>
int main(){
	printf("======ex03======\n");
		char str[100] = "2147483647";
		char str1[100] = "-2147483648";
		char str2[100] = "     0";
		char str3[100] = "++-+--0";
		char str4[100] = "    	++-+---+---+--123";
		char str5[100] = "	  ++--+---++++-123abc";
		printf("%d\n", ft_atoi(str));
		printf("%d\n", ft_atoi(str1));
		printf("%d\n", ft_atoi(str2));
		printf("%d\n", ft_atoi(str3));
		printf("%d\n", ft_atoi(str4));
		printf("%d\n", ft_atoi(str5));
}*/
