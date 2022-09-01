/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:45:23 by rrask             #+#    #+#             */
/*   Updated: 2022/08/23 13:05:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	multiply(int num)
{
	return(num *10);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*cpy;

	cpy = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		cpy[i] = f(tab[i]);
		i++;
	}
	return (cpy);
}

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_putnbr (-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (0);
}

int	main(void)
{
	int	arr[5];
	int	*arr2;
	int	i;

	arr[0] = 4;
	arr[1] = 4;
	arr[2] = 6;
	arr[3] = 8;
	arr[4] = 2;
	arr2 = ft_map(arr, 5, &multiply);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", arr2[i]);
		i++;
	}
	return (0);
}
