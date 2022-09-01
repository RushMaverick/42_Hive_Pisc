/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:11:48 by rrask             #+#    #+#             */
/*   Updated: 2022/08/28 13:31:34 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str != '/0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (!(char *)malloc(sizeof(char) * ft_strlen(str)))
		return (0);
	while (str ! )
		c[i++] = str++;
	c[i] = '\0';
	return (c);
}

int	main(void)
{
	printf("%s", "I want cake");
	return (0);
}
