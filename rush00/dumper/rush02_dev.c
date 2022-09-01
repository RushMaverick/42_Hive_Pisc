/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_dev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:44:19 by rrask             #+#    #+#             */
/*   Updated: 2022/08/14 16:29:41 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rush02(int x, int y)
{
	int total_print;
	int row_position_x;
	int counter;
	int line_number_y;

	row_position_x = 0;
	counter = 0;
	total_print = x * y;
	line_number_y = 0;

		//Handle first line.
		while(line_number_y == 0)
		{
			if (row_position_x == 0 || row_position_x == x - 1)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
			row_position_x ++;
			if(row_position_x == x)
			{
				ft_putchar('\n');
				row_position_x = 0;
				line_number_y++;
			}
		}

		//handle middle lines
		while (line_number_y >  0 && line_number_y < y - 1)
		{
			if(row_position_x == 0 || row_position_x == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			row_position_x ++;
			if(row_position_x == x)
			{
				ft_putchar('\n');
				row_position_x = 0;
				line_number_y++;
			}

		}
		//Handle last line.
		while(line_number_y == y - 1)
		{
			if (row_position_x == 0 || row_position_x == x - 1)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}

			row_position_x ++;
			if(row_position_x == x)
			{
				ft_putchar('\n');
				row_position_x = 0;
				line_number_y++;
			}
		}
		row_position_x++;

	return(0);
}

int	main(void)
{
	rush02(2, 1);
	return(0);
}
