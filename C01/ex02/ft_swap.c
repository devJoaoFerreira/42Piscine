/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:19:03 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/15 18:29:18 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

/* int	main(void)
{
	int	x = 0;
	int y = 9;
	int *a = &x;
	int *b = &y;
	ft_swap(a, b);
	printf("%d", x);
	printf("%d", y);
	return (0);
} */

void	ft_swap(int *a, int *b)
{
	int	z;

	z = *a;
	*a = *b;
	*b = z;
}
