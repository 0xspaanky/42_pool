/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:12:33 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/21 11:30:05 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	j = d;
	if (size == 0 || size <= d)
		return (s + size);
	while (src[i] && i < size - d - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d + s);
}

/*
int main() {
    char src[] = "ABCDEFGH";
    char dest[] = "IJKL";
    printf("%d ;;;; %s", ft_strlcat(dest, src, 20), dest);

    return 0;
}*/
