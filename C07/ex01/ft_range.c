/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:33:39 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/30 21:39:08 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range( int min, int max)
{
	int	i;
	int	*range;
	int	j;
	int	x;

	if (min >= max)
		return (NULL);
	i = min;
	x = max - min;
	range = malloc(x * sizeof(int));
	if (range == NULL)
		return (NULL);
	j = 0;
	while (i < max)
	{
		range[j] = i;
		i++;
		j++;
	}
	return (range);
}
/*
int main() {
	int i;
	int *range;
	
    range = ft_range(2,8);
	while (i < 8 - 2)
	{
		printf("%d", range[i]);
		i++;
	}
    return 0;
}*/
