/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:21:26 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/22 21:59:26 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

/* int	main(void)
{
	char *n = " ---+--+ab567";

	printf("%d", ft_atoi(n));
} */

int	ft_atoi(char *str)
{
	long int	x;
	int			result;
	int			s;

	result = 0;
	x = 0;
	s = 1;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			s = s * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10;
		result = result + (str[x] - 48);
		x++;
	}
	return (s * result);
}
