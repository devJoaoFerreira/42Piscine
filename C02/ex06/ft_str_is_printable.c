/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:51:41 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:10:58 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

/* int main(void)
{
	char	str[] = {24, 35, 48, 120};
	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));
	return (0);
} */

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			if (str[x] >= 32 && str[x] <= 126)
				x ++;
			else if (str[x] < 32 || str[x] > 126)
				return (0);
		}
		return (1);
	}
	return (1);
}
