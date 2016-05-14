/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:22:13 by jspring           #+#    #+#             */
/*   Updated: 2016/05/10 14:00:52 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned	char	*str;

	str = (unsigned char *)s;
	i = 0;
	if (n <= 0)
		return ;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
