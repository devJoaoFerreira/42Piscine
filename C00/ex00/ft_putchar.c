/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:24:07 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/14 12:22:13 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/* int	main(void)
{
	ft_putchar('f');
	return (0);
} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
