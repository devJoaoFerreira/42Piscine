/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:20:43 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/20 14:19:53 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

/* int	main(void)
{
	char src[] = "def";
	char	dest[10] = "abc";
	unsigned	int	nb = 2;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
		y++;
	while (src[x] != '\0' && x < nb)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
