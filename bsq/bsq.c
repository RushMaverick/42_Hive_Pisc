/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:15:39 by junheeki          #+#    #+#             */
/*   Updated: 2022/08/29 17:31:13 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	bsq(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i = 0;
		while (str[j] != '\0')
		{
			j++;
		}
		i++;
	}
	//Load the map.
	//Special conditions like error handling, then read next map.
	//Change all char to int.
	//Find all squares.
	//Get their values by addition.
	//Compare numbers.If there are same value of squares, choose closest to the top of the map, the the one most to the left.
	//Change all int to char.
	//Print out*/
	return (*str);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		printf("%s", "No arguments here, bruv.");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
}
