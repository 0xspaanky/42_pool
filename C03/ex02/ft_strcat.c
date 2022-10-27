/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:42:23 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/21 11:52:23 by smounafi         ###   ########.fr       */
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
/*
int main() {
    char src[] = "Wssup";
    char dest[] = "Hey";
    printf("%s", ft_strcat(dest, src));
}*/
