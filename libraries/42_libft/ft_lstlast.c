/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:04:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/13 20:55:21 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_element	*ft_lstlast(t_element *element)
{
	if (element == NULL)
		return (NULL);
	while (element->next != NULL)
		element = element->next;
	return (element);
}
