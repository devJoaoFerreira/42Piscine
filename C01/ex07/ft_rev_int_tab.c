/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:10:49 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/15 18:31:33 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/* int	main(void)
{
	
	int	tab[6] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(tab)/ sizeof(tab[0]);
	int x = 0;
	ft_rev_int_tab(tab, size);
	while(x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
	return (0);
} */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	z;

	a = 0;
	size --;
	while (a < size)
	{
		z = tab[a];
		tab[a] = tab[size];
		tab [size] = z;
		a ++;
		size --;
	}
}
