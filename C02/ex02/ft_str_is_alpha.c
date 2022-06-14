/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:46:17 by cna               #+#    #+#             */
/*   Updated: 2022/05/24 19:56:01 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{	
	int	i;

	if (! *str)
		return (1);
	else
	{
		i = 0;
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				i++;
			else if ((str[i] >= 'A' && str[i] <= 'Z'))
				i++;
			else
				return (0);
		}
		return (1);
	}
}