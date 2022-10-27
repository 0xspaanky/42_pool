/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:42:31 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/30 21:42:22 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0' ;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		length;

	str = NULL;
	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i++]);
	}
	length = length + ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(((sizeof(char) * length)));
	if (!str)
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*tab[4];

	tab [0] = "Si";
	tab [1] = "oui C oui";
	tab [2] = "Sinon";
	tab [3] = "C non";
	printf("%s\n", ft_strjoin(4, tab, ","));
	return (0);
}*/
