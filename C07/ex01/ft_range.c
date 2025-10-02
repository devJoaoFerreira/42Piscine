/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:04:55 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/29 16:05:28 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	*ft_range(int min, int max);

/* int	main(void)
{
	int	min = 8;
	int	max = 7;
	int	a = 0;
	int *dest = ft_range(min, max);
	while ( a < max - min)
	{
		printf("%d", dest[a]);
		a++;
	}
	free(dest);
	return (0);
} */

int	*ft_range(int min, int max)
{
	int	*dest;
	int	x;

	x = 0;
	if (min >= max)
		return (NULL);
	dest = malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	while (x < (max - min))
	{
		dest[x] = x + min;
		x++;
	}
	return (dest);
}
