/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 22:54:51 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/26 21:54:56 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b ;
	*b = temp;
}

void	ft_sort_param(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (ac > i)
	{
		j = i + 1;
		while (ac > j)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_swap(&av[i], &av[j]);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	ft_sort_param(ac, av);
	i = 1;
	while (i < ac)
	{
		while (*av[i])
			write(1, &(*av[i]++), 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
