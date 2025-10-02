/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:27:43 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/22 21:59:21 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

/* int	main(void)
{
	int	nbr = 255;
	char	*hex = "0123456789abcdef";
	char	*oct = "01234567";
	char	*dec = "0123456789";
	char	*bin = "01";

	ft_putnbr_base(nbr, dec);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, bin);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, oct);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, hex);
	write(1, "\n", 1);
} */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_checks(char *base)
{
	int	a;
	int	b;

	if (ft_baselen(base) < 2)
		return (1);
	a = 0;
	while (base[a] != '\0')
	{
		b = a + 1;
		if (base[a] == '+' || base[a] == '-')
			return (1);
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	x;
	int			baselen;

	x = nbr;
	if (ft_checks(base))
		return ;
	baselen = ft_baselen(base);
	if (x < 0)
	{
		x = -x;
		ft_putchar('-');
	}
	if (x >= baselen)
		ft_putnbr_base(x / baselen, base);
	ft_putchar(base[x % baselen]);
}
