/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:37:52 by rrask             #+#    #+#             */
/*   Updated: 2022/08/31 20:40:38 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_firstword(char *str)
{
	int		i;
	int		j;
	char	fword;

	i = 0;
	j = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
			printf("%s", "Skip ");
		}
		else
		{
			fword = str[i];
			str[i] = str[j];
			str[i] = fword;
			printf("%s", "That's what we want ");
			i++;
		}
	}
	return (str);
}

int	main(void)
{
	char	*str;

	str = " what is up";
	printf("%s", ft_firstword(str));
	return (0);
}
