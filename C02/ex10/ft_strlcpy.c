/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 09:07:34 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:13:27 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/* int	main(void)
{
	char src[] = "bocaladfghjk";
	char dest[3];
	unsigned int size = sizeof(src)/sizeof(src[0]);
	ft_strlcpy(dest, src, size);
	printf("%s", dest);
	return (0);
} */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	l;

	l = 0;
	while (src[l])
		l ++;
	x = 0;
	if (size > 0)
	{
		while (src[x] != '\0' && x < size -1)
		{
			dest[x] = src[x];
			x ++;
		}
		dest[x] = '\0';
	}
	return (l);
}
