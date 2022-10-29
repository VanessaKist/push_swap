/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:44:03 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/29 04:40:39 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_for_three(t_element **stack_a)
{
	int frst;
	int snd;
	int thrd;

	frst = (*stack_a)->content;
	snd = (*stack_a)->next->content;
	thrd = (*stack_a)->next->next->content;

	if (frst < snd && frst < thrd && snd > thrd)
	{
		do_reverse_rotate(stack_a);
		do_swap(stack_a);
	}
	if (frst > snd && frst < thrd && snd < thrd)
		do_swap(stack_a);
	if (frst < snd && frst > thrd && snd > thrd)
		do_reverse_rotate(stack_a);
	if (frst > snd && frst > thrd && snd < thrd)
		do_rotate(stack_a);
	if (frst > snd && frst > thrd && snd > thrd)
	{
		do_rotate(stack_a);
		do_swap(stack_a);
	}	
}
