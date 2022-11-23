/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:24:03 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:43:00 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap(t_element **list)
{
	t_element	*aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = *list;
	*list = aux;
}

void	do_swap(t_element **stack, char c)
{
	if (c == 'a')
	{
		swap(stack);
		printf("sa\n");
	}
	if (c == 'b')
	{
		swap(stack);
		printf("sb\n");
	}
}
