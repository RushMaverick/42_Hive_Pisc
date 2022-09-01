/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:42:27 by rrask             #+#    #+#             */
/*   Updated: 2022/08/25 18:57:11 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	ft_next(char *c)
{
	int	j;

	j = 0;
	while (c[j] != '\0')
	{
		if ((65<=c[j] && c[j]<=90) || (c[j]>=90 && c[j]<=122))
		{
			if (c[j] == 'Z' || c[j] == 'z')
			{
				putchar(c[j] - 25);
			}
			else
			{
				putchar(c[j] + 1);
			}
		}
		else
		{
			putchar(c[j]);
		}
		j++;
	}
	putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	/* You cannot change argv, how dare you !man */
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_next(argv[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
