/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:34:20 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/20 14:21:36 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/* int	main(void)
{
	char	dest[8] = "wooo";
	char	src[] = "lolasdfg";
	unsigned int size = sizeof(dest);
	printf("%d", ft_strlcat(dest, src, size));
	printf("%s", dest);
	return (0);
} */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	x;

	dest_l = 0;
	src_l = 0;
	x = 0;
	while (dest_l < size && dest[dest_l] != '\0')
		dest_l++;
	while (src[src_l] != '\0')
		src_l++;
	if (dest_l == size)
		return (size + src_l);
	while (src[x] != '\0' && (dest_l + x + 1) < size)
	{
		dest[dest_l + x] = src[x];
		x++;
	}
	if (dest_l + x < size)
		dest[dest_l + x] = '\0';
	return (dest_l + src_l);
}
