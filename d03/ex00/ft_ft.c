/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:15:26 by rrask             #+#    #+#             */
/*   Updated: 2022/08/12 19:16:38 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	//take a pointer to an int as a parameter,  store the value 42 to that int.
	int i;

	i = 42;

	int* num_ptr = &i;

	write(1,  &i, 1);
}

int	main()
{
	ft_ft(num_ptr);
}
