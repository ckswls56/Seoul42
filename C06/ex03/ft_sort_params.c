/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:58:02 by cna               #+#    #+#             */
/*   Updated: 2022/05/31 17:58:04 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char **tab, int argc)
{
	int		i;
	int		j;
	char	*tmp;

	i = argc - 1;
	if (argc < 1)
		return ;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	ft_sort_tab(argv, argc);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
	}
}
