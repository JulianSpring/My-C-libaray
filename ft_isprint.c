/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:14:29 by jspring           #+#    #+#             */
/*   Updated: 2016/05/09 11:22:22 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
