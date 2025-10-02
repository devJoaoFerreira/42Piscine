/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:07:20 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/20 14:17:23 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/* int	main(void)
{
	char	s1[] = "12";
	char	s2[] = "123";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
} */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x ++;
	}
	return (s1[x] - s2[x]);
}
