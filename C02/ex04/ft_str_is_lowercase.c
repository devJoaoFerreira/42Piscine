/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:24:47 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:09:55 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

/* int	main(void)
{
	char	str[] = "fghj";
	ft_str_is_lowercase(str);
	printf("%d", ft_str_is_lowercase(str));
	return (0);
} */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				x ++;
			else if (str[x] < 'a' || str[x] > 'z')
				return (0);
		}
		return (1);
	}
	return (1);
}
