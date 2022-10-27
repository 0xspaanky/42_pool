/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:54:34 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/19 15:43:44 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	y;
	unsigned int	x;

	y = 0;
	x = ft_strlen(src);
	if (size != 0)
	{
		while (str[i] != '\0' && y < size -1)
		{
			dest[y] = src[y];
			y++;
		}
	dest[y] = '\0';
	}
	return (x);
}
