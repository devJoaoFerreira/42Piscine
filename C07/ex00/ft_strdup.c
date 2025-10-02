/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:37:15 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/29 16:04:51 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

/* char *ft_strdup(char *src);

int	main(void)
{
	char *src = "bocal";
    char *dest= ft_strdup(src);
	if (dest == NULL)
		return 1;
	printf("%s\n%s", src, dest);
	free(dest);
	return 0;
} */

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
		x++;
	dest = malloc((x + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (y <= x)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
