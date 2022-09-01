/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_dev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:44:19 by rrask             #+#    #+#             */
/*   Updated: 2022/08/14 16:25:35 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_first(a, b, c)
{
	if (a == 0 || b == c - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
	a++;
	if(a == x)
	{
		ft_putchar('\n');
		a = 0;
		b++;
	}
}

int	ft_print_middle()
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

int	ft_print_last()
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

	//Handle first line. ft_print_first?
	while(line_number_y == 0)
	{
		ft_print_first(row_position_x, line_number_y, x);
	}

	//handle middle lines ft_print_middle?
	while (line_number_y >  0 && line_number_y < y - 1)
	{
		ft_print_middle();
	}
	//Handle last line. ft_print_last?
	while(line_number_y == y - 1)
	{
		ft_print_last();
	}
	row_position_x++;

	return(0);
}

int	main(void)
{
	rush02(4, 4);
	return(0);
}
