/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:43:27 by ineguill          #+#    #+#             */
/*   Updated: 2025/09/13 19:34:08 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	firstrow(int x)
{
	int		b;

	b = 0;
	if (x > 0)
	{
		ft_putchar('A');
		b++;
	}
	while (b <= x - 2)
	{
		ft_putchar('B');
		b++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	write(1, "\n", 1);
}

void	fillers(int x)
{
	int		a;

	a = 0;
	if (x > 0)
	{
		ft_putchar('B');
		a++;
	}
	while (a <= x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	write (1, "\n", 1);
}

void	lastrow(int x, int y)
{
	int		c;

	c = 0;
	if (y > 1)
	{
		ft_putchar('C');
		c++;
	}
	while (c <= x - 2)
	{
		ft_putchar('B');
		c++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}

void	rush(int x, int y)
{
	int	lines;

	lines = 1;
	if (x < 0 | y < 0)
		return ;
	if (!(x == 0 || y == 0))
	{
		firstrow(x);
		while (lines <= y - 2)
		{
			fillers(x);
			lines ++;
		}
		if (y > 1)
		{
			lastrow(x, y);
			write(1, "\n", 1);
		}
	}
}
