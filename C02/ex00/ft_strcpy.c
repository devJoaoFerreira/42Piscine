/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:08:59 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 19:08:24 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

/* int	main(void)
{
	char src[] = "bocal";
	char dest[]= "ano novo";
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
} */

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x ++;
	}
	dest[x] = '\0';
	return (dest);
}
