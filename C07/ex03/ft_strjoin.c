/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:01:54 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/29 16:08:11 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_concat(int size, char **strs, char *sep, char *all);
int		ft_strlen(char *str);

/* int	main(void)
{
	char	*strs[] = {"ola", "tudo", "bem", "?"};
	int	size = 4;
	char	*sep = " ";
	char *result = ft_strjoin(size, strs, sep);

	if (result)
	{
		printf("%s", result);
		free(result);
	}
	return 0;
} */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (size == 0)
	{
		all = malloc(1);
		if (all)
			all[0] = '\0';
		return (all);
	}
	while (x < size)
	{
		y += ft_strlen(strs[x]);
		x++;
	}
	y += ft_strlen(sep) * (size - 1);
	all = malloc((y + 1) * sizeof(char));
	if (!all)
		return (NULL);
	return (ft_concat(size, strs, sep, all));
}

char	*ft_concat(int size, char **strs, char *sep, char *all)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
		{
			all[c++] = strs[a][b++];
		}
		if (a < size -1)
		{
			b = 0;
			while (sep[b])
				all[c++] = sep[b++];
		}
		a++;
	}
	all[c] = '\0';
	return (all);
}
