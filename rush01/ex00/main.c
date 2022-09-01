/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:50:58 by rrask             #+#    #+#             */
/*   Updated: 2022/08/21 19:57:09 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 9

int		ft_findempty(int *row, int *column, int grid[SIZE][SIZE]);
int		ft_valid(int row, int column, int grid[SIZE][SIZE], int num);
void	ft_printgrid(int grid[SIZE][SIZE]);

int	ft_sudokusolver(int grid[SIZE][SIZE])
{
	int	row;
	int	column;
	int	num;

	if (ft_findempty(&row, &column, grid) == 0)
	{
		ft_printgrid(grid);
		return (1);
	}
	num = 1;
	while (num <= 9)
	{
		if (ft_valid(row, column, grid, num) == 1)
		{
			grid[row][column] = num;
			if (ft_sudokusolver(grid) == 1)
				return (1);
			grid[row][column] = 0;
		}
		num++;
	}
	return (0);
}

int	ft_line(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 10)
	{
		i = 1;
		while (i < SIZE + 1)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				j++;
			}
			if (j != SIZE)
			{
				return (1);
			}
			i++;
		}
		return (0);
	}
	else
		return (1);
}

int	ft_char(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 10)
	{
		i = 1;
		while (i < SIZE + 1)
		{
			j = 0;
			while (j < SIZE)
			{
				if (argv[i][j] != '.' && (argv[i][j] < '1' || argv[i][j] > '9'))
					return (1);
				j++;
			}
			i++;
		}
		return (0);
	}
	else
		return (1);
}

int	ft_atoi(char c)
{
	int	res;

	res = 0;
	if (c >= '0' && c <= '9')
		res = res + (c - '0');
	return (res);
}

int	main(int argc, char **argv)
{
	int	grid[SIZE][SIZE];
	int	i;
	int	j;

	if (argc == 10 && ft_line(argc, argv) == 0 && ft_char(argc, argv) == 0)
	{
		i = 1;
		while (argc != 0 && i <= SIZE)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				grid[i - 1][j] = ft_atoi(argv[i][j]);
				j++;
			}
			i++;
		}
		if (ft_sudokusolver(grid) == 0)
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
