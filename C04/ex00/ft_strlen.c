/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:13:53 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/22 21:59:36 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

/* int	main(void)
{
	char	str[] = "1234567";
	printf("%d", ft_strlen(str));
	return (0);
} */

int	ft_strlen(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
