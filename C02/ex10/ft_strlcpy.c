/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:21:32 by cna               #+#    #+#             */
/*   Updated: 2022/05/25 20:33:36 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i++] = '\0';
	return (ft_strlen(src));
}
