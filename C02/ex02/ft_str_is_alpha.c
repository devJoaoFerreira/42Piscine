/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:24:20 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 18:59:55 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

/* int	main(void)
{
	char	str[] = "FGHJ";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
} */

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			if ((str[x] >= 'a' && str[x] <= 'z')
				|| (str[x] >= 'A' && str[x] <= 'Z'))
				x ++;
			else if (str[x] < 'A' || (str[x] > 'Z'
					&& str[x] < 'a') || str[x] > 'z')
				return (0);
		}
		return (1);
	}
	return (1);
}
