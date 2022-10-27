/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:15:49 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/12 04:19:08 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unsignd_int;

	if (nb < 0)
	{
		unsignd_int = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
	{
		unsignd_int = (unsigned int)nb;
	}
	if (unsignd_int >= 10)
	{
		ft_putnbr(unsignd_int / 10);
		ft_putnbr(unsignd_int % 10);
	}
	else
		ft_putchar(unsignd_int + '0');
}
