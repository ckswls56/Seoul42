/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:23:23 by cna               #+#    #+#             */
/*   Updated: 2022/05/26 18:17:19 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}
/*#include <stdio.h>
 * #include <string.h>
 * int main(){
 * printf("======ex01======\n");
		char str[100] = "abcdefg";
		char str1[100] = "a b c";
		ft_putstr(str); printf("\n");
		ft_putstr(str1); printf("\n");
		}*/
