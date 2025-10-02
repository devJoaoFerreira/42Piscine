/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:11:59 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/15 20:47:21 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/* int	main(void)
{
	int	x = 8;
	int y = 5;
	int *a = &x;
	int *b = &y;
	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
} */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}
