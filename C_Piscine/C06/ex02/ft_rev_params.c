/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:58:00 by cna               #+#    #+#             */
/*   Updated: 2022/05/31 17:58:14 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	while (--argc > 0)
	{
		j = 0;
		while (argv[argc][j] != '\0')
			write(1, &argv[argc][j++], 1);
		write(1, "\n", 1);
	}
}
