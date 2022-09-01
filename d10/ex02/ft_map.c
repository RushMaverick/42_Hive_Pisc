/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:45:23 by rrask             #+#    #+#             */
/*   Updated: 2022/08/23 13:42:25 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
