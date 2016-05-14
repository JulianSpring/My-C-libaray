/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 11:12:36 by jspring           #+#    #+#             */
/*   Updated: 2016/05/11 12:45:57 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_words(char const *s, char c, size_t count, size_t i)
{
	while (s[++i])
		if (s[i] != c)
		{
			count++;
			while (s[i] != c)
				i++;
		}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t		r;
	size_t		y;
	size_t		i;
	char		**str;

	str = (char **)malloc(sizeof(char *) * ft_num_words(s, c, 0, -1) + 1);
	i = 0;
	r = 0;
	while (s[i])
		if (s[i] != c)
		{
			y = i;
			while (s[i] != c)
				i++;
			str[++r - 1] = ft_strsub(s, y, (i - y));
		}
		else
			i++;
	str[r] = (char *)malloc(sizeof(char) * 2);
	str[r][0] = '\0';
	return (str);
}
