/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:26:38 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:44:57 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rotate(t_element **list)
{
	t_element	*aux;
	t_element	*last;

	last = ft_lstlast(*list);
	aux = *list;
	last->next = aux;
	*list = aux->next;
	aux->next = NULL;
}

void	do_rotate(t_element **stack, char c)
{
	if (c == 'a')
	{
		rotate(stack);
		printf("ra\n");
	}
	if (c == 'b')
	{
		rotate(stack);
		printf("rb\n");
	}
}
