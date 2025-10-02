/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:58:24 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/14 12:26:37 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{
			z = y +1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (!(x == '7' && y == '8' && z == '9'))
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
