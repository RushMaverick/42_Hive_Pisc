/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:45:27 by rrask             #+#    #+#             */
/*   Updated: 2022/08/19 10:54:22 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_generic_tu1(char *c)
{
	write(1, c, 3);
	return (0);
}


int	ft_generic_tu3(char *c)
{

	write(1, c, 2);
	return (0);
}

void	ft_generic(void)
{
	int	i;
	char *tu1 = "Tu ";
	char *tu2 = "tu ";
	char *tu3 = "; ";


	i = 1;
	while (i != 0)
	{
		ft_generic_tu1(tu1);
		ft_generic_tu1(tu2);
		ft_generic_tu1(tu2);
		ft_generic_tu1(tu2);
		ft_generic_tu3(tu3);
		ft_generic_tu1(tu1);
		ft_generic_tu1(tu2);
		ft_generic_tu1(tu2);
		ft_generic_tu1(tu2);
		i--;
	}
}

int	main(void)
{
	ft_generic();
	return (0);
}
