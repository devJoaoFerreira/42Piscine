/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:09:06 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/30 11:23:54 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_baselen(char *str);
int		ft_skip(char *nbr);
int		base_position(char *str, char *base);
void	ft_putnbr_base(int nbr, char *base, char *res);
void	ft_putnbr_base_recursive(long n, char *base, char *dest, int *j);

/* int	main(void)
{
	char *s;
	char *nbr = "     -+-+----+-52635";
	char *base_from = "0123456789";
	char *base_to = "0123456789abcdef";

	s = ft_convert_base(nbr, base_from,base_to);
	printf("%s\n", s);
	return (0);
} */

int	ft_atoi_base(char *str, char *base)
{
	int			baselen;
	int			x;
	int			sign;
	long int	res;

	baselen = ft_baselen(base);
	x = ft_skip(str);
	sign = 1;
	res = 0;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign *= -1;
		x++;
	}
	while (base_position(&str[x], base) != baselen)
	{
		res = res * baselen + base[str[x] - '0'] - '0';
		x++;
	}
	return (res * sign);
}

void	ft_putnbr_base(int nbr, char *base, char *dest)
{
	long int	i;
	int			baselen;
	int			j;

	i = nbr;
	baselen = ft_baselen(base);
	j = 0;
	if (i < 0)
	{
		i *= -1;
		dest[j++] = '-';
	}
	ft_putnbr_base_recursive(i, base, dest, &j);
}

void	ft_putnbr_base_recursive(long n, char *base, char *dest, int *j)
{
	int	baselen;

	baselen = ft_baselen(base);
	if (n >= baselen)
		ft_putnbr_base_recursive(n / baselen, base, dest, j);
	dest[(*j)++] = base[n % baselen];
	dest[*j] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*dest;
	long int	a;
	int			b;

	if (ft_check_base(base_from) || ft_check_base(base_to))
		return (NULL);
	a = ft_atoi_base(nbr, base_from);
	if (a < 0)
		a = -a;
	b = 0;
	while (a > 0)
	{
		a /= ft_baselen(base_to);
		b++;
	}
	dest = malloc(sizeof(char) * (b + 1));
	if (!dest)
		return (NULL);
	*dest = '\0';
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, dest);
	return (dest);
}
