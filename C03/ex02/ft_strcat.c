/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:35:57 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/20 14:18:53 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

/* int	main(void)
{
	char src[] = "def";
	char	dest[10] = "abc";
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
} */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
		y++;
	while (src[x] != '\0')
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
