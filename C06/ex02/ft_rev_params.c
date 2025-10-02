/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:56:01 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/24 16:28:31 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc -1;
	if (argc == 1)
		return (0);
	while (x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
