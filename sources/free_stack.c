/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:40:38 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:42:04 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_element **stack)
{
	t_element	*aux;

	aux = *stack;
	while (*stack)
	{
		aux = *stack;
		*stack = (*stack)->next;
		free(aux);
	}
	stack = NULL;
}
