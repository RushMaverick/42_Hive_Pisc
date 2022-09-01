/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:02:03 by rrask             #+#    #+#             */
/*   Updated: 2022/08/13 12:06:04 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush02(int x, int y)
{
	int total_print;

	int counter;

	counter = 0;

	total_print = (x + 1) * y;

	while(counter <= total_print)
	{
		ft_putchar('k');
	}
}
