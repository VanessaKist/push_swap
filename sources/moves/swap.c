/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:24:03 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/28 01:38:41 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	do_swap(t_element **list)
{
	t_element *aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = *list;
	*list = aux;
}
