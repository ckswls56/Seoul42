/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:42:26 by cna               #+#    #+#             */
/*   Updated: 2022/05/26 18:16:54 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int main(){
	printf("======ex00======\n");
		char str[100] = "abcdefg";
		char str1[100] = "a b c";
		printf("%lu %d\n", strlen(str), ft_strlen(str));
		printf("%lu %d\n", strlen(str1), ft_strlen(str1));
}*/
