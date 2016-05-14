/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jspring <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:27:11 by jspring           #+#    #+#             */
/*   Updated: 2016/05/12 08:54:02 by jspring          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list **alst)
{
	t_list		*temp;

	temp = *alst;
	while (&(*temp))
	{
		ft_putendl(temp->content);
		ft_putnbr(temp->content_size);
		ft_putchar('\n');
		temp = temp->next;
	}
}
