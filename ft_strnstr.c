/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:11:41 by jspring           #+#    #+#             */
/*   Updated: 2016/05/11 08:09:30 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s2[0])
		return (char *)s1;
	i = 0;
	while (i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j] && s2[j] != '\0')
			{
				i++;
				j++;
				len--;
			}
			if (s2[j] == '\0')
				return (char *)s2;
		}
		i++;
	}
	return (NULL);
}
