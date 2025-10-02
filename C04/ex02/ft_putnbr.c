/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:28:11 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/22 21:59:29 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

/* int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(long int x)
{
	ft_putchar(x % 10 + '0');
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		x = -x;
		ft_putchar('-');
	}
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_printnbr(x);
	}
	else
		ft_putchar(x + '0');
}
