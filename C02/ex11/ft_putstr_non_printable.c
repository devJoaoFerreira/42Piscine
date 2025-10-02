/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:55:50 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 15:15:07 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

/* int	main(void)
{
	char	str[] = "\fOla \nesta tudo\v bem";
	ft_putstr_non_printable(str);
	return (0);
} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexadec(unsigned char c)
{
	char	*hexadec;

	hexadec = "0123456789abcdef";
	ft_putchar(hexadec[c / 16]);
	ft_putchar(hexadec[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 32 || str[x] > 126)
		{
			ft_putchar('\\');
			ft_hexadec(str[x]);
		}
		else
			ft_putchar(str[x]);
		x ++;
	}
}
