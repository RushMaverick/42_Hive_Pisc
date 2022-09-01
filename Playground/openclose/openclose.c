/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openclose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:30:07 by rrask             #+#    #+#             */
/*   Updated: 2022/08/25 16:04:43 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c);

void	ft_putnbr(int i);

void	ft_putstr(char *str);

int	main(void)
{
	int	fd;

	fd = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	ft_putnbr(fd);
	return (0);
}
