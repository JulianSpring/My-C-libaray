/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 09:06:06 by jspring           #+#    #+#             */
/*   Updated: 2016/05/12 07:48:54 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, \
		int c, size_t n)
{
	size_t				i;
	unsigned	char	*s1;
	unsigned	char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n && s2[i])
	{
		if (s2[i] == (unsigned char)c)
			return (&dst[i + 1]);
		s1[i] = s2[i];
		i++;
	}
	return (NULL);
}
