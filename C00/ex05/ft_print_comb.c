/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:23:56 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/12 04:21:33 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	tab[3];

	tab[0] = 48;
	while (tab[0] <= 55)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 56)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 57)
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] < 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
		tab[1]++;
		}
		tab[0]++;
	}
}
