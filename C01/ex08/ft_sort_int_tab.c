/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:12:26 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/16 05:51:20 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	max;
	int	min;

	max = tab[0];
	min = tab[0];
	i = 0;
	while (i < size)
	{
		if (tab[i] < tab[i + 1])
		{
			max = tab[i + 1];
			min = tab[i];
		}
		else
		{
			max = tab[i];
			min = tab[i + 1];
		}
		i++;
	}
}
