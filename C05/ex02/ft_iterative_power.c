/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:33:28 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/23 23:35:37 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

/* int	main(void)
{
	int	nb = 4;
	int	power = 2;
	printf("%d", ft_iterative_power(nb, power));
	return(0);
} */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (power > 1)
	{
		nb *= x;
		power--;
	}
	return (nb);
}
