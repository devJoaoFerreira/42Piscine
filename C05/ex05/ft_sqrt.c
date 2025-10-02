/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:38:26 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/23 23:37:55 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

/* int	main(void)
{
	int	nb = 144;
	printf("%d", ft_sqrt(nb));
	return (0);
} */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb <= 0)
		return (0);
	while (x * x < nb)
	{
		x++;
	}
	if (x * x == nb)
		return (x);
	return (0);
}
