/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:26:22 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/08 02:11:48 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main (int argc, char **argv)
{
	t_data data;
	int i;

	if (argc < 2)
		return (1);
	i = 1;
	while (argv[i])
		i++;
	data.a = malloc(sizeof (char *) * (i + 1));
	//printf("%d\n", i);
	return 0;
}
