/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strs_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:34:00 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/02 09:39:16 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
/* #include <stdio.h> */

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *arr);
int					ft_strlen(char *arr);

/* int	main(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = ft_strs_to_tab(ac, av);
	while (i < ac)
	{
		printf("%s\n", tab[i].str);
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].copy);
		i++;
	}
	return (0);
} */

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}

char	*ft_strdup(char *arr)
{
	char	*dest;
	int		x;

	x = 0;
	dest = malloc((ft_strlen(arr)+ 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (arr[x])
	{
		dest[x] = arr[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_strlen(char *arr)
{
	int	a;

	a = 0;
	while (arr[a])
		a++;
	return (a);
}
