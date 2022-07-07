/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:16 by cna               #+#    #+#             */
/*   Updated: 2022/06/01 18:30:19 by cna              ###   ########.fr       */
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

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = -1;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(strs[0]);
	i = 0;
	while (++i < size)
	{
		len += ft_strlen(sep);
		len += ft_strlen(strs[i]);
	}
	str = (char *)malloc(len + 1);
	*str = '\0';
	i = -1;
	while (++i < size - 1)
	{
		ft_strcat(str, strs[i]);
		ft_strcat(str, sep);
	}
	if (size > 0)
		ft_strcat(str, strs[i]);
	return (str);
}
