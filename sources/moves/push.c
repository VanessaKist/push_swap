/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:26:11 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:44:30 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	push(t_element **src, t_element **dst)
{
	t_element	*aux;

	if (*src == NULL)
		return ;
	aux = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = aux;
}

void	do_push(t_element **stack_a, t_element **stack_b, char c)
{
	if (c == 'a')
	{
		push(stack_a, stack_b);
		printf("pb\n");
	}
	if (c == 'b')
	{
		push(stack_b, stack_a);
		printf("pa\n");
	}
}
