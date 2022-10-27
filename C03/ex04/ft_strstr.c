/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:26:07 by smounafi          #+#    #+#             */
/*   Updated: 2022/06/22 16:32:15 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x])
	{
		y = 0;
		while (str[x + y] && str[x + y] == to_find[y])
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
	}
	return (0);
}
/*int main() {
    char a[] = "ABCDE";
    char b[] = "b";
    printf("%s", ft_strstr(a, b));
}*/
