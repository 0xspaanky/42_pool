/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:05:45 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/30 22:20:27 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*#include <stdio.h>
int main()
{
	int **range;
	int diff;
	int i;

	i = 0;
	diff = ft_ultimate_range(range, 2, 8);
	printf ("%d\n",diff);
	while(i < diff)
	{
	printf("%d\n", range[0][i]);
	i++;
	}
	return 0;
}*/
