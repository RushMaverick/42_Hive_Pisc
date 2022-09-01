/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:29:32 by rrask             #+#    #+#             */
/*   Updated: 2022/08/21 14:22:05 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int a, int b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

int main(void)
{
	int i = 1;
	int j = 2;
	ft_swap(i, j);

	printf("i = %d\n", i);
	printf("j = %d\n", j);



}
