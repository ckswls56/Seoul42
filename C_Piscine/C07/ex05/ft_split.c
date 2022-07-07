/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:09:21 by cna               #+#    #+#             */
/*   Updated: 2022/06/06 10:44:12 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	token(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

void	cnt_str(char *str, char *charset, int *cnt)
{
	if (!*str)
		return ;
	while (*str && token(*str, charset))
		str++;
	if (*str)
		(*cnt)++;
	while (*str && !token(*str, charset))
		str++;
	cnt_str(str, charset, cnt);
}

int	cnt_alpha(char *str, char *charset, int *i)
{
	int	cnt;

	cnt = 0;
	while (str[(*i)] && token(str[(*i)], charset))
		(*i)++;
	while (str[(*i) + cnt] && !token(str[(*i) + cnt], charset))
		cnt++;
	return (cnt);
}

char	**allocate(char *str, char *charset, char **result)
{
	int	cnt;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	cnt = 0;
	k = 0;
	cnt_str(str, charset, &cnt);
	result = (char **)malloc(sizeof(char *) * (cnt + 1));
	while (str[i])
	{
		cnt = cnt_alpha(str, charset, &i);
		if (cnt == 0)
			break ;
		result[j] = (char *)malloc(sizeof(char) * (cnt + 1));
		cnt += i;
		while (i < cnt)
			result[j][k++] = str[i++];
		result[j++][k] = '\0';
		k = 0;
	}
	result[j] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;

	result = 0;
	result = allocate(str, charset, result);
	return (result);
}
