/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:51:41 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:09:27 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

/* int	main(void)
{
	char	str[] = "12asd";
	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
	return (0);
} */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			if (str[x] >= '0' && str[x] <= '9')
				x ++;
			else if (str[x] < '0' || str[x] > '9')
				return (0);
		}
		return (1);
	}
	return (1);
}
