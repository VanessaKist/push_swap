/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:26:11 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/04 02:48:07 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.

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
		printf("pa\n");
	}
	if (c == 'b')
	{
		push(stack_b, stack_a);
		printf("pb\n");
	}
}