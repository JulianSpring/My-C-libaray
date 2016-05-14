/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 16:33:06 by jspring           #+#    #+#             */
/*   Updated: 2016/05/09 16:46:55 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*b;

	i = 0;
	while (str[i] != (char)c && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '\0')
		return (NULL);
	b = &str[i];
	return (b);
}