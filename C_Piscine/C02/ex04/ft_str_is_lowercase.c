/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:16:11 by cna               #+#    #+#             */
/*   Updated: 2022/05/25 20:57:34 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{	
	int	i;

	if (!*str)
		return (1);
	else
	{
		i = 0;
		while (str[i])
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
			i++;
		}
		return (1);
	}
}