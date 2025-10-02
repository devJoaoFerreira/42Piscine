/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:32:02 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/22 17:30:09 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

/* int	main(void)
{
	char	str[] = "Bsolaefolzxyol";
	char	to_find[] = "ola";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}  */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y] && to_find[y] != '\0')
		{
			y++;
		}
		if (to_find[y] == '\0')
		{
			return (&str[x]);
		}
		x++;
	}
	return (NULL);
}
