/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:36:33 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/20 14:17:49 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/* int	main(void)
{
	unsigned	int	n = 3;
	char	s1[] = "12\f234";
	char	s2[] = "1234567";
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x ++;
	}
	if (x < n)
		return ((unsigned char)s1[x] - (unsigned char)s2[x]);
	return (0);
}
