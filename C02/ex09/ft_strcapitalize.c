/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 08:44:41 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/17 20:25:04 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

/* int	main(void)
{
	char str[] = "hi, hoW are you? 42worDs forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
} */

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x] != '\0')
	{
		if (!((str[x - 1] >= 'a' && str[x - 1] <= 'z')
				|| (str[x - 1] >= 'A' && str[x - 1] <= 'Z')
				|| (str[x - 1] >= '0' && str[x - 1] <= '9')))
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x ++;
	}
	return (str);
}
