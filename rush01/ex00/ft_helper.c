/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:33 by rrask             #+#    #+#             */
/*   Updated: 2022/08/21 20:00:17 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 9

int	ft_findempty(int *row, int *column, int grid[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (grid[i][j] == 0)
			{
				*row = i;
				*column = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_boxvalid(int row, int column, int grid[SIZE][SIZE], int num)
{
	int	i;
	int	j;

	i = row / 3 * 3;
	while (i < row / 3 * 3 + 3)
	{
		j = column / 3 * 3;
		while (j < column / 3 * 3 + 3)
		{
			if (grid[i][j] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_valid(int row, int column, int grid[SIZE][SIZE], int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (grid[i][column] == num)
			return (0);
		i++;
	}
	if (ft_boxvalid(row, column, grid, num) == 0)
		return (0);
	return (1);
}

void	ft_printgrid(int grid[SIZE][SIZE])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			c = grid[i][j] + '0';
			write (1, &c, 1);
			if (j < SIZE - 1)
			{
				write (1, " ", 1);
			}
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
