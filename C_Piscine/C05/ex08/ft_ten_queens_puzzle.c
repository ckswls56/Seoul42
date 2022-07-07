/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cna <cna@stduent.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:29:41 by cna               #+#    #+#             */
/*   Updated: 2022/06/01 10:59:22 by cna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

void	print_queens(char *board)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &board[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	promising(char *board, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (board[i] == board[y] || y - i == ft_abs(board[y] - board[i]))
			return (0);
		i++;
	}
	return (1);
}

void	play_queens(char *board, int y, int *cnt)
{
	int	x;

	if (y == 10)
	{
		(*cnt)++;
		print_queens(board);
	}
	else
	{
		x = 0;
		while (x < 10)
		{
			board[y] = x + '0';
			if (promising(board, y))
				play_queens(board, y + 1, cnt);
			x++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		*cnt;
	int		count;

	count = 0;
	cnt = &count;
	play_queens(board, 0, cnt);
	return (*cnt);
}
