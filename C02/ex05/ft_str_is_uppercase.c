/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:47:54 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:10:25 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

/* int	main(void)
{
	char	str[] = "DF";
	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
	return (0);
} */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			if (str[x] >= 'A' && str[x] <= 'Z')
				x ++;
			else if (str[x] < 'A' || str[x] > 'Z')
				return (0);
		}
		return (1);
	}
	return (1);
}
