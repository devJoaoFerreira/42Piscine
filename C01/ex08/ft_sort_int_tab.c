/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:05:20 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/16 09:44:24 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {8, 2, 7, 1, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	int x = 0;
	ft_sort_int_tab(tab, size);
	while( x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	z;
	int	t;

	a = 0;
	while (a < size)
	{
		z = 0;
		while (z < size)
		{
			if (tab[a] <= tab [z])
			{
				t = tab [a];
				tab[a] = tab[z];
				tab[z] = t;
			}
			z++;
		}
		a++;
	}
}
