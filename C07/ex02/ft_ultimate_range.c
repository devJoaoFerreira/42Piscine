/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:11:57 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/29 16:06:29 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	ft_ultimate_range(int **range, int min, int max);

/* int	main(void)
{
	int	min = 9;
	int	max = 5;
	int *range = NULL;
	int	x = ft_ultimate_range(&range, min, max);
	int y = 0;
	if (x > 0 && range != NULL)
	{
		while (y < x)
		{
			printf("%d", range[y]);
			y++;
		}
	}
	free(range);
	return (0);
} */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	x;

	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (malloc((max - min) * sizeof(int)));
	if (dest != NULL)
	{
		while (x < (max - min))
		{
			dest[x] = x + min;
			x++;
		}
		*range = dest;
		return (x);
	}
	else
		return (-1);
}
