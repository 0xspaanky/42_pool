/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:36:37 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/12 18:19:23 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	tab[a];
	int	tab1[b];

	while (a >= '0')
	{
		if (a == '0')
			ft_putchar('o');
		if (b == '0')
		{
			ft_putchar('\n');
			ft_putchar('|');
		}
	}
}	