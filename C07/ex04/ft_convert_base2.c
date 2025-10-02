/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:56:45 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/30 11:23:38 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_baselen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	ft_check_base(char *base)
{
	int	x;
	int	y;
	int	baselen;

	x = 0;
	baselen = ft_baselen(base);
	if (baselen < 2)
		return (1);
	while (base[x])
	{
		y = 0;
		while (y < x)
		{
			if (base[y] == base[x])
				return (1);
			y++;
		}
		if (base[x] == '+' || base[x] == '-')
			return (1);
		x++;
	}
	return (0);
}

int	ft_skip(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	base_position(char *str, char *base)
{
	int	r;

	r = 0;
	while (base[r])
	{
		if (str[0] == base[r])
			return (r);
		r++;
	}
	return (r);
}
