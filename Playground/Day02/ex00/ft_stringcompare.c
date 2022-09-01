/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringcompare.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:21:32 by rrask             #+#    #+#             */
/*   Updated: 2022/08/30 11:18:06 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while (st1[i] != '\0' && st2[i] != '\0')
	{
		if (st1[i] != st2[i])
		{
			return (st1 - st2);
		}
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello"));
	return (0);
}
