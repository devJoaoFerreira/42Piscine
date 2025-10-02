/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:02:24 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/16 13:36:45 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

/* int	main(void)
{
	ft_print_combn(2);
	return (0);
} */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
}

void	ft_setup_nbr(char *nbr, int n)
{
	int	x;

	x = 0;
	nbr[x++] = '0';
	while (x < 9)
	{
		if (x < n)
			nbr[x] = nbr[x - 1] + 1;
		else
			nbr[x] = '\0';
		x++;
	}
}

void	ft_increase_nbr(char *nbr, int n)
{
	int	a;
	int	b;

	a = n - 1;
	b = 0;
	while (a >= 0)
	{
		if (nbr[a] < '9' - (n -1 - a))
		{
			nbr[a]++;
			b = a + 1;
			while (b < n)
			{
				nbr[b] = nbr[b - 1] + 1;
				b++;
			}
			return ;
		}
		a--;
	}
}

void	ft_print_combn(int n)
{
	char	nbr[10];

	if (n < 1 | n > 9)
		return ;
	ft_setup_nbr(nbr, n);
	while (!(nbr[n -1] == '9' && nbr[0] == '9' +1 - n))
	{
		ft_putstr(nbr);
		ft_putstr(", ");
		ft_increase_nbr(nbr, n);
	}
	ft_putstr(nbr);
}
