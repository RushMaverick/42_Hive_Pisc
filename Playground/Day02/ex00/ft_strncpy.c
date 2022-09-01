/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:30:28 by rrask             #+#    #+#             */
/*   Updated: 2022/08/30 21:12:44 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] != '\0' || n != 0)
		{
			dest[i] = src[i];
			i++;
		}
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	test[9];

	ft_strncpy(test, "Come get it.", 9);
	return (0);
}
