/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:21:26 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/24 16:30:45 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_argcmp(char *s1, char *s2);
void	ft_putstr(char **argv);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*t;

	x = 1;
	while (x < argc)
	{
		y = 1;
		while (y < argc)
		{
			if (ft_argcmp(argv[x], argv[y]) < 0)
			{
				t = argv[y];
				argv[y] = argv[x];
				argv[x] = t;
			}
			y++;
		}
		x++;
	}
	ft_putstr(argv);
}

int	ft_argcmp(char *s1, char *s2)
{
	int	f;

	f = 0;
	while (s1[f] == s2[f] && s1[f] != '\0')
		f++;
	return (s1[f] - s2[f]);
}

void	ft_putstr(char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
