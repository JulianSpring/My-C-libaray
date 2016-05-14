/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 08:53:35 by jspring           #+#    #+#             */
/*   Updated: 2016/05/12 07:58:53 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*s1;
	const	char	*s2;
	char			temp[n];

	s1 = (char *)dest;
	s2 = (const char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = s2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		s1[i] = temp[i];
		i++;
	}
	return (dest);
}
