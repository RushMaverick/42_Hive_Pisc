/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:01:06 by rrask             #+#    #+#             */
/*   Updated: 2022/08/25 19:16:57 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)

{
	int	dog;
	int	num;

	num = 0;
	dog = 0;

	while (str[dog] >= '0' && str[dog] <= '9')
	{
		if (str[dog] != '\0')
		{
  
		}
		dog++;
	}
	return (num);
}

