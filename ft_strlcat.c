/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 17:28:58 by jspring           #+#    #+#             */
/*   Updated: 2016/05/10 11:40:45 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (size-- != 0 && dest[i] != '\0')
		i++;
	if ((size - i) == 0)
		return ((i) + ft_strlen(src));
	len = size - i;
	j = 0;
	while (src[j] != '\0')
	{
		if (len != 1)
		{
			dest[i] = src[j];
			len--;
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (i - 1);
}
