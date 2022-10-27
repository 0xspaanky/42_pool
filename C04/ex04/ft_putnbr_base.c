/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:41:57 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/23 18:14:19 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	syntax_base(char *str)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = ft_strlen(str);
	if (str[i] == '\0' || x == 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < x)
		{
			if (str[i] == str [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	nb = nbr;
	if (syntax_base(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < (unsigned int)ft_strlen(base))
			ft_putchar(base[nb]);
		if (nb >= (unsigned int)ft_strlen(base))
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			ft_putnbr_base(nb % ft_strlen(base), base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(10, "0123456789ABCDEF");
}*/
