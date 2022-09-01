/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:05:37 by rrask             #+#    #+#             */
/*   Updated: 2022/08/21 11:16:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_match(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			printf("%s", "MATCH");
		}
		else if (s1[i] != s2[i])
		{
			printf("%s", "Naw");
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_match(argv[1], argv[2]);
	return (0);
}
