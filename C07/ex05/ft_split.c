/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 20:57:27 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/09/30 11:23:48 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int		ft_checks(char c, char *charset);
int		ft_word_c(char *str, char *charset);
char	*ft_word(char *str, char *charset);
char	**ft_split(char *str, char *charset);

/* int	main(void)
{
	char	*str = "Words to.be/splitted.in@six";
	char	*charset = "./@! ";
	char	**dest = ft_split(str, charset);
	int i = 0;

	while (dest[i])
	{
		printf("%s\n", dest[i]);
		free(dest[i]);
		i++;
	}
	free(dest);
} */

int	ft_checks(char c, char *charset)
{
	int	r;

	r = 0;
	while (charset[r])
	{
		if (c == charset[r])
			return (1);
		r++;
	}
	return (0);
}

int	ft_word_c(char *str, char *charset)
{
	int	word_c;
	int	a;

	word_c = 0;
	a = 0;
	while (str[a])
	{
		if (!(ft_checks(str[a], charset)))
		{
			word_c += 1;
			while (str[a] && !ft_checks(str[a], charset))
				a++;
		}
		else
			a++;
	}
	return (word_c);
}

char	*ft_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !ft_checks(str[i], charset))
		i++;
	word = malloc((i +1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !ft_checks(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		x;
	int		y;

	dest = malloc((ft_word_c(str, charset) + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	x = 0;
	y = 0;
	while (str[x])
	{
		if (!(ft_checks(str[x], charset)))
		{
			dest[y] = ft_word(&str[x], charset);
			while (str[x] && !ft_checks(str[x], charset))
				x++;
			y++;
		}
		else
			x++;
	}
	dest[y] = NULL;
	return (dest);
}
