/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:54:28 by cna               #+#    #+#             */
/*   Updated: 2022/05/25 21:01:07 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i])
	{
		if (is_upper(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!(is_upper(str[i - 1])) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}
