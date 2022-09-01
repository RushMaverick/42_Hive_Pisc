/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijas <vijas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:17:12 by vijas             #+#    #+#             */
/*   Updated: 2022/08/14 20:20:03 by vijas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first(int row, int x)
{
	while (row < x)
	{
		if (row == 0 || row == x -1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		row++;
	}
}

void	ft_print_middle(int row, int x)
{
	while (row < x)
	{
		if (row == 0 || row == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		row++;
	}
}

void	ft_print_last(int row, int x)
{
	while (row < x)
	{
		if (row == 0 || row == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		row++;
	}
}

void	ft_reset(int row)
{
	ft_putchar('\n');
	row = 0;
}

int	rush(int x, int y)
{
	int	row_position_x;
	int	line_number_y;

	if (x > 0 && y > 0)
	{
		row_position_x = 0;
		line_number_y = 0;
		ft_print_first(row_position_x, x);
		ft_reset(row_position_x);
		line_number_y++;
		while (line_number_y > 0 && line_number_y < y - 1)
		{
			ft_print_middle(row_position_x, x);
			ft_reset(row_position_x);
			line_number_y++;
		}
		row_position_x = 0;
		while (line_number_y == y - 1)
		{
			ft_print_last(row_position_x, x);
			line_number_y++;
			ft_reset(row_position_x);
		}
	}
	return (0);
}
