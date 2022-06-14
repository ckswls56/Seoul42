/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:42:01 by cna               #+#    #+#             */
/*   Updated: 2022/05/24 19:57:48 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{	
	int	i;

	if (!*str)
		return (1);
	else
	{
		i = 0;
		while (str[i])
		{
			if ((str[i] <= 31 || str[i] >= 127))
				return (0);
			i++;
		}
		return (1);
	}
}
