/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:51:34 by rrask             #+#    #+#             */
/*   Updated: 2022/08/11 17:06:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
    write(1 , &c , 1);
    return(0);
}

int ft_nputchar(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
        {
            ft_putchar(c);
            i = i + 1;
        }
    return(0);
}


int     main()
{
    ft_nputchar('F', 42);
    ft_putchar('Q');
    ft_putchar('\n');
    return(0);
}
