/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:48:03 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/23 23:36:04 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

/* int	main(void)
{
	int	nb = 3;
	int	power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return(0);
} */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (power < 2)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
